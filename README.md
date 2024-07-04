<a id="readme-top"></a>

<!-- [![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url] -->
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]

<!-- PROJECT LOGO -->
<!-- <br /> -->
<div align="center">
  <!-- <a href="https://github.com/mt-rahman/open-closed-principle-cpp">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a> -->

<h3 align="center">Open-Closed Principle in C++ </h3>

  <p align="center">
    Example of open-closed principle implementation in C++
    <!-- <br />
    <a href="https://github.com/mt-rahman/open-closed-principle-cpp"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/mt-rahman/open-closed-principle-cpp">View Demo</a>
    ·
    <a href="https://github.com/mt-rahman/open-closed-principle-cpp/issues/new?labels=bug&template=bug-report---.md">Report Bug</a>
    ·
    <a href="https://github.com/mt-rahman/open-closed-principle-cpp/issues/new?labels=enhancement&template=feature-request---.md">Request Feature</a> -->
  </p>
</div>


<!-- ABOUT THE PROJECT -->
## About The Project

<!-- [![Product Name Screen Shot][product-screenshot]](https://example.com) -->

This project provides examples of how to implement open-closed principle in C++ using polymorphism.

### SOLID
SOLID is an acronym for 5 principles in object-oriented programming:
* **S**ingle-responsibility principle
* **O**pen-closed principle
* **L**iskov substitution principle
* **I**nterface segregation principle
* **D**ependency inversion principle

These principles are a guideline to create scalable and maintainable code. This project focuses on the second principle.

### Open-Closed Principle
>"Classes should be **open for extension** and **closed to modification**"

What this means is that we should be able to add new functionality to our code without modifying existing tested & working code. This reduces the possibility of introducing bugs to otherwise working production code.

In C++, this can be implemented using polymorphism.

### Polymorphism
Polymorphism in object-oriented programming is a feature that allows an entity (e.g. function or class method) to have multiple behaviours/implementations in different scenarios.

In this project, we'll be looking into two ways polymorphism is implemented in C++:
* **Function overriding**: where the behaviour of a function belonging to a parent class can be overriden by a function of the same name in a child class
* **Virtual functions**: function overriding using a pointer of the parent class

These concepts will help us create code that adheres to the open-closed principle.

### Project Tree
This project contains 4 examples, each in their own respective directories:
* `polymorphism-function-overriding`: example of function overriding
* `polymorphism-virtual-functions`: example of virtual functions
* `ocp-bad-example`: example of a "shape" program not following the open-closed principle
* `ocp-good-example`: example of a "shape" program following the open-closed principle

Open each file in those directories and run the executable files to see how each concept works. Executable files are located in the `build` directory.

```bash
.
├── build
│   ├── ocp-bad-example
│   │   └── ocp-bad-example
│   ├── ocp-good-example
│   │   └── ocp-good-example
│   ├── polymorphism-function-overriding
│   │   └── polymorphism-function-overriding
│   └── polymorphism-virtual-functions
│       └── polymorphism-virtual-functions
├── ocp-bad-example
│   ├── CMakeLists.txt
│   ├── main.cpp
│   └── shape.h
├── ocp-good-example
│   ├── circle.h
│   ├── CMakeLists.txt
│   ├── main.cpp
│   ├── rectangle.h
│   ├── shape.h
│   └── square.h
├── polymorphism-function-overriding
│   ├── CMakeLists.txt
│   └── main.cpp
├── polymorphism-virtual-functions
│   ├── CMakeLists.txt
│   └── main.cpp
├── README.md
└── CMakeLists.txt
```

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- GETTING STARTED -->
## Getting Started

### Prerequisites

* C++ compiler
* CMake

### Building and Running
If you made changes to any cpp or header file, you must re-build the project. Otherwise, you can run each program using the executable files in `build`.

**Using terminal:**
1. Navigate to the `build` directory of the project
2. Run cmake to generate build files, then compile:
    ```sh
      # generate build files
      cmake ..
      # compile
      make
    ```
3. Navigate to the respective directory of the examples in the `build` directory and execute the program:
    ```bash
      # example
      cd ocp-bad-example
      ./ocp-bad-example
    ```
**Using cmake-tools in VS Code:**
1. Build: https://github.com/microsoft/vscode-cmake-tools/blob/main/docs/build.md
2. Run: https://github.com/microsoft/vscode-cmake-tools/blob/main/docs/debug-launch.md
<!-- ### Installation

1. Get a free API Key at [https://example.com](https://example.com)
2. Clone the repo
   ```sh
   git clone https://github.com/mt-rahman/open-closed-principle-cpp.git
   ```
3. Install NPM packages
   ```sh
   npm install
   ```
4. Enter your API in `config.js`
   ```js
   const API_KEY = 'ENTER YOUR API';
   ``` -->

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
<!-- ## Usage


<p align="right">(<a href="#readme-top">back to top</a>)</p> -->

<!-- ROADMAP -->
<!-- ## Roadmap

- [ ] Feature 1
- [ ] Feature 2
- [ ] Feature 3
    - [ ] Nested Feature

See the [open issues](https://github.com/mt-rahman/open-closed-principle-cpp/issues) for a full list of proposed features (and known issues).

<p align="right">(<a href="#readme-top">back to top</a>)</p> -->

<!-- CONTRIBUTING -->
<!-- ## Contributing -->

<!-- Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#readme-top">back to top</a>)</p> -->

<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE` for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- CONTACT -->
## Contact

Muhammad Taufik Rahman | mtaufikrahman@ymail.com

Project Link: [https://github.com/mt-rahman/open-closed-principle-cpp](https://github.com/mt-rahman/open-closed-principle-cpp)

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- ACKNOWLEDGMENTS -->
<!-- ## Acknowledgments

* []()
* []()
* []()

<p align="right">(<a href="#readme-top">back to top</a>)</p> -->



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/mt-rahman/open-closed-principle-cpp.svg?style=for-the-badge
[contributors-url]: https://github.com/mt-rahman/open-closed-principle-cpp/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/mt-rahman/open-closed-principle-cpp.svg?style=for-the-badge
[forks-url]: https://github.com/mt-rahman/open-closed-principle-cpp/network/members
[stars-shield]: https://img.shields.io/github/stars/mt-rahman/open-closed-principle-cpp.svg?style=for-the-badge
[stars-url]: https://github.com/mt-rahman/open-closed-principle-cpp/stargazers
[issues-shield]: https://img.shields.io/github/issues/mt-rahman/open-closed-principle-cpp.svg?style=for-the-badge
[issues-url]: https://github.com/mt-rahman/open-closed-principle-cpp/issues
[license-shield]: https://img.shields.io/github/license/mt-rahman/open-closed-principle-cpp.svg?style=for-the-badge
[license-url]: LICENSE
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/mtaufikrahman
[product-screenshot]: images/screenshot.png
[Next.js]: https://img.shields.io/badge/next.js-000000?style=for-the-badge&logo=nextdotjs&logoColor=white
[Next-url]: https://nextjs.org/
[React.js]: https://img.shields.io/badge/React-20232A?style=for-the-badge&logo=react&logoColor=61DAFB
[React-url]: https://reactjs.org/
[Vue.js]: https://img.shields.io/badge/Vue.js-35495E?style=for-the-badge&logo=vuedotjs&logoColor=4FC08D
[Vue-url]: https://vuejs.org/
[Angular.io]: https://img.shields.io/badge/Angular-DD0031?style=for-the-badge&logo=angular&logoColor=white
[Angular-url]: https://angular.io/
[Svelte.dev]: https://img.shields.io/badge/Svelte-4A4A55?style=for-the-badge&logo=svelte&logoColor=FF3E00
[Svelte-url]: https://svelte.dev/
[Laravel.com]: https://img.shields.io/badge/Laravel-FF2D20?style=for-the-badge&logo=laravel&logoColor=white
[Laravel-url]: https://laravel.com
[Bootstrap.com]: https://img.shields.io/badge/Bootstrap-563D7C?style=for-the-badge&logo=bootstrap&logoColor=white
[Bootstrap-url]: https://getbootstrap.com
[JQuery.com]: https://img.shields.io/badge/jQuery-0769AD?style=for-the-badge&logo=jquery&logoColor=white
[JQuery-url]: https://jquery.com
