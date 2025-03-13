pipeline {
    agent {
        docker {
            image 'gcc:latest'  // Using GCC for compiling C++ code
        }
    }
    stages {
        stage('Checkout') {
            steps {
                git branch: 'main', url: 'https://github.com/JabezLawrenceG/PES1UG23AM802_Jenkins.git'
            }
        }
        stage('Build') {
            steps {
                sh 'g++ main.cpp -o main'  // Compiling main.cpp
            }
        }
        stage('Test') {
            steps {
                sh './main'  // Running the compiled executable
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying application...'
            }
        }
    }
    post {
        failure {
            echo 'Pipeline Failed!'
            sh 'echo PIPELINE FAILED'
        }
    }
}
