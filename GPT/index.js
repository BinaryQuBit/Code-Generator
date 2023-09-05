import fs from 'fs';
import { Configuration, OpenAIApi } from 'openai';

// Api token and organization
async function runChatBot() {
  const configuration = new Configuration({
    organization: '', // Your Organization ID here
    apiKey: '', // Your API Key here
  });

  const openai = new OpenAIApi(configuration);

  async function saveToFile() {
    try {
      const messagesData = fs.readFileSync('chat_messages.json', 'utf8');
      const messages = JSON.parse(messagesData);

      const completion = await openai.createChatCompletion({
        model: 'gpt-3.5-turbo-16k-0613', // Your Model here
        messages: messages,
      });

      // Log the response to inspect its structure - console out
      const response = completion.data.choices[0].message;
      console.log(response);

      // Append the response to chat_messages.json file
      messages.push(response);

      // Append Next after the assistant response
      const userMessage = {
        role: 'user',
        content: 'Next',
      };
      messages.push(userMessage);

      // Add to the chat_messages.json
      fs.writeFile('chat_messages.json', JSON.stringify(messages), 'utf8', (err) => {
        if (err) {
          console.error('Error writing to chat_messages.json:', err);
        } else {
          console.log('API response appended to chat_messages.json');
        }
      });

      // Generate a unique filename based on timestamp
      const timestamp = new Date().toISOString().replace(/[-:.]/g, '');
      const filename = `linker_${timestamp}.cpp`;

      // Write the assistant's response content to a new file with the unique filename
      let assistantResponse = response.content;
      assistantResponse = assistantResponse.replace(/```cpp/g, ''); // Remove "```cpp"
      assistantResponse = assistantResponse.replace(/```/g, ''); // Remove "```"

      // writing to the unique file
      fs.writeFile(filename, assistantResponse, 'utf8', (err) => {
        if (err) {
          console.error(`Error writing to ${filename}:`, err);
        } else {
          console.log(`Assistant response saved to ${filename}`);
        }
      });
    } catch (error) {
      console.error('Error:', error);
    }
  }

// Iterations
  for (let i = 0; i < 1; i++) {
    await saveToFile();
    await delay(5000); // Delay of 5 seconds
  }
}

// delay function
function delay(ms) {
  return new Promise((resolve) => setTimeout(resolve, ms));
}

runChatBot();