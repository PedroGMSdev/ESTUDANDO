*HTML*


*CSS*


*JAVASCRIPT*


*TYPESCRIPT*


*JAVA*


*BANCO DE DADOS*


*GIT*

# git log
    Comando dado no Terminal (log = registro) que mostra todos os commits registrados no repositório.

# git log --stat
    Comando dado no Terminal que, além de mostrar todos os commits registrados no repositório, também mostra o que foi feito nele.

# git log --oneline
    Comando dado no Terminal que mostra todos os commits registrados no repositório, mas de uma forma mais simplificada, monstrando quase que apenas o identificador do commit e o nome do commit.

# git status
    Comando dado no Terminal que vai mostrar a comparação de tudo o que tinha antes, no status inicial, e o depois das modificações feitas no momento atual.

__ESTÁGIOS DOS STATUS__
    - Modified (modificado):
        Quando um arquivo que já faz parte do repositório apresentou uma modificação, ainda não salva.
    - Staged (está em área de preparo):
        Quando você quer escolher e sinalizar um arquivo específico dentre os modificados para que apenas ele seja salvo posteriormente.
            [Exp.:
            [   Quando você dá continuidade em um projeto ou está debugando, e faz muitas modificações no respositário todo, mas ao final percebeu que o problema era apenas em um arquivo específico, você usa o staged para sinalizar que apenas as alterações feitas naquele arquivo que deverão ser salvas, sem mexer no outro. Você adiciona esse arquivo ao STAGED com o comando GIT ADD. Apenas os arquivos que estão no STAGED serão salvos no commit.
    - Commit (salvamento):
        Quando tiverem sido feitas todas as alterações desejadas e quiser salvar o progresso.
    - Untracked (sem modificações):
        Quando os arquivos do repositório não tiverem nenhuma alteração, nem sinalização de reserva para staged.

# .gitignore
    Arquivo criado dentro da raiz do projeto, ou seja, na pasta inicial do projeto, onde serão colocados todos os arquivos que não haverá necessidade de serem salvos. Exemplos muito comuns são os arquivos criados pelo NODE.js e Next.js, ao quais podem ser baixados toda vez atravez do comando "npm install" ou até "npm ci".

# git add
    Comando dado no Terminal que vai fazer o arquivo informado subir para o status "Staged", sinalizando que aquele arquivo deverá ser salvo. Para sinalizar o arquivo desejado você coloca o nome dele após o comando, antes de confirmar,
            [Exp:
            [   git add .gitignore
            [       Ao dar o ENTER confirmando o comando, o arquivo .gitignore subirá para o status de  "Changes to be committed", que é o mesmo status Staged, esperando para ser salvo.

# git commit
    Comando dado no Terminal que irá salvar as alterações feitas, NO REPOSITÓRIO LOCAL. Ao confirmar esse comando, abrirá uma tela no "Vim" (editor de texto natural do computador) para que você possar nomear esse commit, de preferência com informações do que foi feito nessa modificação, que ficará salvo e quando chamado o comando de status, aparecerá na listagem.

# git diff
    Comando dado no Terminal que pede para ser identificado a diferença (diff = diferença) entre o ponto inicial (último salvamento) e o ponto atual (depois das novas alterações), onde será sinalizado o arquivo que foi modificado e o conteúdo que foi alterado nele.

# git commit --amend
    Comando dado no Terminal que sinaliza que o conteúdo que estiver no status Staged será emendado (amend = emendar), ou melhor, adicionado, ao repositório criado antes deste. Esse comando é utilizado caso o usuário não queira criar um novo commit com a nova alteração, apenas ACRESCENTAR ao que já fez. Porém, ao fazer esse comando a nova modificação e o commit anterior se juntarão em um novo commit, ficando com o mesmo nome do commit anterior mas criando um novo identificador, sinalizando que o commit anterior não existe mais.

ATENÇÃO: usar esse comando com cuidado, de preferência apenas quando o conteúdo for uma alteração de acrescentar.
