pipeline {
    agent any

    stages {
        stage('Checkout'){
            steps{
                git branch: 'main', 
                url: 'https://github.com/tgjuranec/algos.git'
            }
        }
        stage('Build') {
            steps {
                echo 'Building..'
                sh 'make'
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}

