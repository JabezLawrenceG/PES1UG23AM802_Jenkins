pipeline {
    agent any
    
    stages {
        stage('Build') {
            steps {
                sh 'g++ main.cpp -o main.out'
            }
        }
        stage('Test') {
            steps {
                sh './main.out'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deployment successful'
            }
        }
    }
    post {
        failure {
            echo 'Pipeline Failed'
        }
    }
}
