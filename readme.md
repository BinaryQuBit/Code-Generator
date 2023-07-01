<h1 align = center>Code Generator</h1>
<h2><u>Objective</u></h2>

<h3>The purpose of this application is to generate datasets consisting of diverse codes. These datasets can then be utilized in the field of Natural Language Processing in Machine Learning. </h3>
<h1></h1>

<h2><u>Contributors</u></h2>

<h3>
<ul><a href = "https://github.com/BinaryQuBit">Amandip Padda</a></ul>
</h3>
<h1></h1>

<h2><u>Set Up</u></h2>


<h3><strong>Downloads:</strong></h3>
<h3>

* <a href = "https://code.visualstudio.com/download">Visual Studio Code</a>
* <a href = "https://code.visualstudio.com/download">Node JS</a> Framework (Ver. 18.16.1 LTS) -> Tested :white_check_mark:
</h3>

<h3><strong>Open AI:</strong></h3>

<h3>

* <a href = "https://auth0.openai.com/u/signup/identifier?state=hKFo2SBkVnBzMi1UbWJOZFVPM1ctM0ZVSnAwdm5KWjJEaDFQNaFur3VuaXZlcnNhbC1sb2dpbqN0aWTZIE0wZUR5WXRzWElLYWlFVzBRbXBZNTNxVDhVMWRQZF9Qo2NpZNkgRFJpdnNubTJNdTQyVDNLT3BxZHR3QjNOWXZpSFl6d0Q">Sign Up</a> 
* Get Organization ID: 

        Personal -> Manage account -> Settings
    <br>
* Get API:

        Personal -> Manage account -> Settings -> API Keys -> + Create new secret key 
    <br>
</h3>

<h3><strong>index.js:</strong></h3>
<h3>

* Linking Account:

        organization: 'Your Organization ID here',
        apiKey: 'Your API Key here',
    <br>
* Model:

        model: 'Choose Any Model',
    <h5><i>Note: There are various models like gpt-3.5-turbo, gpt-3.5-turbo-16k etc. available. Please refer to Rate Limits under Manage accounts in OpenAI.</i></h5>
    <br>

* File Name:

        const filename = `linker_${timestamp}.cpp`;
    <h5><i>Note: For the above example linker has been choosen as a name. Rest of the files start with the name "Linker" with time stamp.</i></h5>
    <br>

* Data Size:

        for (let i = 0; i < 60; i++) {
        await saveToFile();
        await delay(5000); // Delay of 5 seconds
        }
    <h5><i>Note: In the above example the size is 60. According to the current tokens; gpt-3.5-turbo can take upto 40,000 tokens per minute.</i></h5>
    <br>
</h3>

<h3><strong>chat_messages.json:</strong></h3>
<h3>
An initial prompt to engage Chat Gpt. The role has to be user with conditions:

    - The prompt has to be very precise.
    - Make sure the prompt has condition of no duplication.
    - Check in the terminal to see if the output meets the condtions of what you are looking for.
    
    - Check the example below:
        "Let's start fresh. We need to clear your chat entirely. I'm working on creating a dataset based on faulty code. Specifically, I'm interested in runtime errors known as Linker Errors. Your task is to provide me with various examples of this type of error, written in .cpp format. To ensure a clean dataset for the machine learning model, we need a diverse range of examples that are clear and complete in terms of code structure. When I say 'next,' please provide me with an example code that triggers the Linker error, without any additional information. I dont need comments in the code. It's crucial to avoid duplicating any code you've already provided. Please only give me the code examples and refrain from offering explanations about the code – this is important. If you understand the instructions, please respond with a simple 'yes,' without any additional text."

</h3>

<h3><strong>Run</strong></h3>
<h3>
To run the code; simply be in GPT directory and:

    node index.js

</h3>
<h1></h1>

<h2><u>Constraints</u></h2>

<h3>

* Might generate wrong codes.
* Might generate duplicates.
* Might fail. If thats the case; please empty chat_messages.json and reprompt. Follow the same syntax:

        [
        {"role":"user","content":"Your Prompt"},
        {"role":"assistant","content":"Yes."},
        {"role":"user","content":"Next"}
        ]
</h3>

<h1></h1>

<h2><u>Assumptions</u></h2>

<h3>

* User has enough credits for API Fetch.
</h3>