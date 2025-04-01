# Informacion del archivo .gitignore
- Incluir un archivo .gitignore es conveniente porque evita que archivos innecesarios o sensibles, como archivos temporales o configuraciones específicas de tu entorno local, se suban al repositorio.

- Cuándo hacerlo: Se debe configurar al inicio de un proyecto para evitar problemas futuros con archivos no deseados en el repositorio.

- Cómo configurarlo: Puedes incluir patrones de archivos o directorios que deseas ignorar. Ejemplo básico:
# Ignorar archivos de log
*.log

# Ignorar directorios de dependencias
node_modules/

# Ignorar archivos de configuración del IDE
.vscode/
