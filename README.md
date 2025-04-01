# Informacion del archivo .gitignore
## ¿Que es el archivo .gitignore? ¿Porque es conveniente usarlo? 
- El archivo .gitignore es un archivo de configuración utilizado en repositorios de Git para especificar qué archivos o directorios no deben ser rastreados ni versionados por Git. Se utiliza para evitar que archivos temporales, de configuración local o cualquier otro archivo innecesario o confidencial se suba al repositorio.

## ¿Cuando se debe hacer?
- El archivo _.gitignore_ debe configurarse desde el inicio de un proyecto, incluso antes de hacer el primer commit. Esto asegura que desde el principio se eviten archivos indeseados en el repositorio, como dependencias locales, archivos de configuración específicos del entorno de desarrollo, o cualquier otro archivo que no sea necesario para el funcionamiento del proyecto en otros entornos o para otros colaboradores.

- Es importante revisarlo y actualizarlo regularmente durante el desarrollo del proyecto. A medida que el proyecto crece, pueden generarse nuevos archivos o directorios que deben ser ignorados, por lo que mantener actualizado el archivo _.gitignore_ asegura que solo se versionen los archivos relevantes y evita posibles problemas al agregar archivos no deseados al repositorio.
## ¿Cómo configurarlo?
- Se pueden incluir patrones de archivos o directorios que deseas ignorar. Ejemplo básico:
### Ignorar archivos de log
*.log

### Ignorar directorios de dependencias
node_modules/

### Ignorar archivos de configuración del IDE
.vscode/