pipeline {
    agent any
    stages {
        stage('Clone repository') {
            steps {
                git branch: 'main',
                    url: 'https://github.com/<user>/<repo>.git'
            }
        }
        stage('Install dependencies') {
            steps {
                sh 'npm install'
            }
        }
        stage('Build application') {
            steps {
                sh 'npm run build'
            }
        }
        stage('Test application') {
            steps {
                sh 'npm test'
            }
        }
        stage('Push artifacts') {
            steps {
                sh 'tar -czf build-artifacts.tar.gz ./build'
                archiveArtifacts artifacts: 'build-artifacts.tar.gz', fingerprint: true
            }
        }
    }
}
