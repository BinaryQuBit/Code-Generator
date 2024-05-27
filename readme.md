<div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/BinaryQuBit/Readme-Setup/8f0f4fec01831f9f50ae640d9a76d6d8ca2264e1/welcomeScreens/codeGenerator.svg" style="width: 100%"></a>
</div>

<br>
<br> 

<div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/BinaryQuBit/Readme-Setup/d7f1f1d16c607a9124692b001b07b9f185f41cbf/headers/objective.svg" style="width: 100%"></a>
</div>

<br>

<p>
    The objective of this project was to develop a script that leverages the ChatGPT API to generate erroneous code samples, including linker errors, semantic errors, and other types of code faults. These generated code samples were used to create a dataset for training an NLP model, aimed at improving the model's ability to identify, classify, and potentially rectify various types of coding errors. This project was conducted in collaboration with a PhD student, contributing to their research in the field of natural language processing and software engineering. The ultimate goal was to enhance the NLP model's capability to assist developers in diagnosing and resolving coding issues more efficiently.
</p>

<br>

<div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/BinaryQuBit/Readme-Setup/99b7aa6f08701c8fcac3add942ac416b607ae2a4/headers/background.svg" style="width: 100%"></a>
</div>

<br>

<p>
    In software development, identifying and resolving errors such as linker and semantic errors is a crucial yet time-consuming task. To improve this process, a project was undertaken to develop a script using the ChatGPT API to generate erroneous code samples automatically. These samples, which simulate real-world coding issues, were used to create a dataset for training an NLP model aimed at enhancing automated error detection and resolution. This effort, conducted in collaboration with a PhD student, contributes to advancing NLP tools in software engineering by providing a comprehensive dataset to train models to better identify and fix coding errors.
</p>

<br>

<div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/BinaryQuBit/Readme-Setup/99b7aa6f08701c8fcac3add942ac416b607ae2a4/headers/intendedAudience.svg" style="width: 100%"></a>
</div>

<br>

- Researchers and Academics
- Software Developers and Engineers
- PhD Students and Graduate Researchers
- Tech Companies and Startups
- AI and NLP Practitioners

<br>

<div style="width: 100%;">
  <a href="#"><img src="https://raw.githubusercontent.com/BinaryQuBit/Readme-Setup/99b7aa6f08701c8fcac3add942ac416b607ae2a4/headers/focus.svg" style="width: 100%"></a>
</div>

<br>

<p>
    The focus of this project is on leveraging natural language processing (NLP) to enhance the software development process by automating the detection and resolution of code errors. By developing a script that uses the ChatGPT API to generate a diverse set of erroneous code samples, the project aims to create a robust dataset for training NLP models. These models are intended to improve the identification and classification of various coding errors, such as linker and semantic errors, and provide potential solutions. The ultimate goal is to streamline debugging processes, reduce manual intervention, and increase overall development efficiency. This project particularly emphasizes the practical application of NLP in software engineering and the collaboration between academic research and practical tool development.
</p>

<br>

<div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/BinaryQuBit/Readme-Setup/626da83e39e3bc3f0359d0fb63a73a934c32f932/headers/assumptions%26Constraints.svg" style="width: 100%"></a>
</div>

### Assumptions:
- Availability of ChatGPT API
- Relevance of Generated Errors
- Effectiveness of NLP Models
- Scalability of the Solution
- Collaboration with Researchers
- Integration with Development Tools
- Accuracy and Quality of Generated Code

### Constraints:
- API Limitations
- Quality of Generated Errors
- Computational Resources
- Data Privacy and Security
- Collaboration and Coordination
- Model Accuracy and Generalization
- Integration Challenges
- Ethical Considerations

<br>

<div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/BinaryQuBit/Readme-Setup/d7f1f1d16c607a9124692b001b07b9f185f41cbf/headers/techStack.svg" style="width: 100%"></a>
</div>

<h3 align = "center">👩‍💻 Languages</h3>

<div align="center">

  [![JAVASCRIPT](https://raw.githubusercontent.com/BinaryQuBit/Readme-Setup/7831b9bf376caf17c9bf3ea09adba48a26525523/badges/languages/right/javascript.svg)](https://www.javascript.com/)

</div>

<h2></h2>

<h3 align="center">🚀 Development Tools & Environments</h3>

<div align="center">

  [![VS CODE](https://raw.githubusercontent.com/BinaryQuBit/Readme-Setup/7831b9bf376caf17c9bf3ea09adba48a26525523/badges/developmentTools%26environments/middle/vsCode.svg)](https://code.visualstudio.com/)

</div>

<br>
    
<div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/BinaryQuBit/Readme-Setup/8f0f4fec01831f9f50ae640d9a76d6d8ca2264e1/headers/setup.svg" style="width: 100%"></a>
</div>

<h3><strong>Downloads:</strong></h3>

- <a href = "https://code.visualstudio.com/download">Visual Studio Code</a>
- <a href = "https://code.visualstudio.com/download">Node JS</a> Framework (Ver. 18.16.1 LTS) -> Tested :white_check_mark:


<h3><strong>Open AI:</strong></h3>

- <a href = "https://auth0.openai.com/u/signup/identifier?state=hKFo2SBkVnBzMi1UbWJOZFVPM1ctM0ZVSnAwdm5KWjJEaDFQNaFur3VuaXZlcnNhbC1sb2dpbqN0aWTZIE0wZUR5WXRzWElLYWlFVzBRbXBZNTNxVDhVMWRQZF9Qo2NpZNkgRFJpdnNubTJNdTQyVDNLT3BxZHR3QjNOWXZpSFl6d0Q">Sign Up</a> 
- Get Organization ID: 

        Personal -> Manage account -> Settings

- Get API:

        Personal -> Manage account -> Settings -> API Keys -> + Create new secret key 

<h3><strong>index.js:</strong></h3>

- Linking Account:

        organization: 'Your Organization ID here',
        apiKey: 'Your API Key here',

- Model:

        model: 'Choose Any Model',
    <h5><i>Note: There are various models like gpt-3.5-turbo, gpt-3.5-turbo-16k etc. available. Please refer to Rate Limits under Manage accounts in OpenAI.</i></h5>


- File Name:

        const filename = `linker_${timestamp}.cpp`;
    <h5><i>Note: For the above example linker has been choosen as a name. Rest of the files start with the name "Linker" with time stamp.</i></h5>

- Data Size:

        for (let i = 0; i < 60; i++) {
        await saveToFile();
        await delay(5000); // Delay of 5 seconds
        }
    <h5><i>Note: In the above example the size is 60. According to the current tokens; gpt-3.5-turbo can take upto 40,000 tokens per minute.</i></h5>
    <br>
</h3>

<h3><strong>chat_messages.json:</strong></h3>

An initial prompt to engage Chat Gpt. The role has to be user with conditions:

- The prompt has to be very precise.
- Make sure the prompt has condition of no duplication.
- Check in the terminal to see if the output meets the condtions of what you are looking for.
    
- Check the example below:
        
        "Let's start fresh. We need to clear your chat entirely. I'm working on creating a dataset based on faulty code. Specifically, I'm interested in runtime errors known as Linker Errors. Your task is to provide me with various examples of this type of error, written in .cpp format. To ensure a clean dataset for the machine learning model, we need a diverse range of examples that are clear and complete in terms of code structure. When I say 'next,' please provide me with an example code that triggers the Linker error, without any additional information. I dont need comments in the code. It's crucial to avoid duplicating any code you've already provided. Please only give me the code examples and refrain from offering explanations about the code – this is important. If you understand the instructions, please respond with a simple 'yes,' without any additional text."



<h3><strong>Run</strong></h3>

To run the code; simply be in GPT directory and:

    node index.js

<br>

<div style="width: 100%;">
  <a href="#"><img src="https://raw.githubusercontent.com/BinaryQuBit/Readme-Setup/d7f1f1d16c607a9124692b001b07b9f185f41cbf/headers/result.svg" style="width: 100%"></a>
</div>

<br>

- Successful Script Development
- Comprehensive Dataset Creation
- Improved NLP Model Performance
- Enhanced Research Collaboration
- Increased Efficiency in Debugging
- Scalable Solution
- Positive Feedback from Test Users

<br>

<div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/BinaryQuBit/Readme-Setup/d7f1f1d16c607a9124692b001b07b9f185f41cbf/headers/nextSteps.svg" style="width: 100%"></a>
</div>

<br>

- Model Refinement and Optimization
- Integration into Development Tools
- User Testing and Feedback
- Expand Error Types
- Documentation and Training
- Collaboration with Academic and Industry Partners
- Ethical and Security Review

<br>

<div style="width: 100%;">
  <a href="#"><img src="https://raw.githubusercontent.com/BinaryQuBit/Readme-Setup/626da83e39e3bc3f0359d0fb63a73a934c32f932/headers/contributors.svg" style="width: 100%"></a>
</div>

<br>

<div align="center">

  [<img src="https://github.com/binaryqubit.png" width="80px;" /><br /><sub><a href="https://github.com/binaryqubit">Amandip Padda</a></sub>](https://github.com/BinaryQuBit)

</div>