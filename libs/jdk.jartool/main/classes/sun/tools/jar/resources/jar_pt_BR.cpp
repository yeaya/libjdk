#include <sun/tools/jar/resources/jar_pt_BR.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace tools {
		namespace jar {
			namespace resources {

$MethodInfo _jar_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(jar_pt_BR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(jar_pt_BR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _jar_pt_BR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.jar.resources.jar_pt_BR",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_jar_pt_BR_MethodInfo_
};

$Object* allocate$jar_pt_BR($Class* clazz) {
	return $of($alloc(jar_pt_BR));
}

void jar_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_pt_BR::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("error.bad.cflag"_s),
			$of("flag \'c\' requer que os arquivos de manifesto ou entrada sejam especificados!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.dflag"_s),
			$of(u"A opção \'-d, --describe-module\' não exige a especificação de arquivos de entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.eflag"_s),
			$of(u"o flag \'e\' e manifesto com o atributo \'Main-Class\' não podem ser especificados \njuntos!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.file.arg"_s),
			$of("Erro ao fazer parsing dos argumentos de arquivo"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.option"_s),
			$of(u"Uma das opções -{ctxuid} deve ser especificada."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.reason"_s),
			$of("motivo incorreto: {0}, deve ser deprecated, deprecated-for-removal ou incubating"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.uflag"_s),
			$of("o flag \'u\' requer que arquivos de manifesto, o flag \'e\' ou arquivos de entrada sejam especificados!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.cant.open"_s),
			$of(u"não é possível abrir: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of(u"{0} : não foi possível criar o diretório"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of(u"Não foi possível criar um arquivo temporário"_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of(u"Módulo de hashing com {0} dependências. Não é possível localizar o módulo {1} no caminho do módulo"_s)
		}),
		$$new($ObjectArray, {
			$of("error.illegal.option"_s),
			$of(u"Opção inválida: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.incorrect.length"_s),
			$of("largura incorreta durante o processamento: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.invalid.versioned.module.attribute"_s),
			$of(u"Atributo {0} de descritor de módulo inválido"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.arg"_s),
			$of(u"a opção {0}  exige um argumento"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.provider"_s),
			$of(u"Prestador de serviços  não encontrado: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.descriptor.not.found"_s),
			$of(u"Descritor de módulo não encontrado"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.options.without.info"_s),
			$of(u"Um dentre --module-version ou --hash-modules está sem module-info.class"_s)
		}),
		$$new($ObjectArray, {
			$of("error.multiple.main.operations"_s),
			$of(u"Você não pode especificar mais de um opção \'-cuxtid\'"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.operative.descriptor"_s),
			$of(u"Nenhum descritor de operação para a release: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of(u"Nenhum descritor do módulo-raiz, especifique --release"_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of(u"{0} : não há tal arquivo ou diretório"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of(u"entrada {0} com controle de versão inesperada para a release {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of(u"release {0} não válida"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of(u"release {0} não válida; deve ser >= 9"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of(u"Não é possível obter o descritor do módulo para: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unexpected.module-info"_s),
			$of(u"Descritor de módulo inesperado {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unrecognized.option"_s),
			$of(u"opção não reconhecida : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.bad.entry.name"_s),
			$of("nome de entrada incorreto, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of(u"a entrada {0} contém uma classe com api diferente da versão anterior"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of(u"nome de entrada {0} muito pequeno, não é um diretório"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of(u"a entrada {0} tem uma versão de classe incompatível com uma versão anterior"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of(u"module-info.class em um diretório com controle de versão contém \"exports\" diferente"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of(u"{0}: module-info.class em um diretório com controle de versão contém \"main-class\" diferente"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of(u"module-info.class em um diretório com controle de versão contém nome incorreto"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of(u"module-info.class em um diretório com controle de versão contém \"opens\" diferente"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of(u"module-info.class em um diretório com controle de versão contém \"provides\" diferente"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of(u"module-info.class em um diretório com controle de versão contém \"requires\" adicional"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of(u"module-info.class em um diretório com controle de versão falta \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of(u"module-info.class em um diretório com controle de versão contém \"requires transitive\" adicional"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of(u"{0}: module-info.class em um diretório com controle de versão contém \"version\" diferente"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of(u"a entrada {0} é uma classe aninhada isolada"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of(u"não é possível validar {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of(u"arquivo jar {0} multi-release inválido excluído"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of(u"a entrada {0} contém uma classe com o nome interno {1}; os nomes não correspondem"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of(u"a entrada {0} contém uma nova classe pública não encontrada nas entradas de base"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of(u"o nome de entrada {0} não tem um número de versão"_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of("Erro ao gravar o arquivo jar existente"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(u" Modificadores de operação válidos em qualquer modo:\n\n  -C DIR                     Altera para o diretório especificado e inclui o\n                             seguinte arquivo:"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of(u"  -f, --file=FILE            O nome do arquivo compactado. Quando omitido, stdin ou\n                             stdout será usado com base na operação\n      --release VERSION      Coloca todos os arquivos a seguir em um diretório com controle de versão\n                             do arquivo jar (i.e. META-INF/versions/VERSION/)"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of(u"  -v, --verbose              Gera saída detalhada na saída padrão"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(u" Modificadores de operação válidos somente no modo de criação:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of(u"  -n, --normalize            Normaliza as informações no novo arquivo compactado jar\n                             após a criação"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(u" Modificadores de operação válidos somente no modo de criação e atualização:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of(u"      --do-not-resolve-by-default  Excluir do conjunto de módulos raiz padrão"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of(u"      --hash-modules=PATTERN Calcula e registra os hashes dos módulos\n                             correlacionado pelo padrão fornecido e do qual depende\n                             direta ou indiretamente em um arquivo jar modular que está sendo\n                             criado ou em um arquivo jar não modular que está sendo atualizado"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(u" Modificadores de operação válidos somente no modo de criação, atualização e geração de índice:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of(u"  -0, --no-compress          Somente armazenamento; não use compactação ZIP"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of(u"  -e, --main-class=CLASSNAME O ponto de entrada do aplicativo para aplicativos\n                             stand-alone empacotados em um arquivo compactado jar modular\n                             ou executável"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of(u"  -m, --manifest=FILE        Inclui as informações de manifesto provenientes do arquivo de\n                             manifesto em questão"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of(u"  -p, --module-path          Local de dependência de módulo para gerar\n                             o hash"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of(u"      --module-version=VERSION    A versão do módulo, ao criar um arquivo jar\n                             modular, ou atualizar um arquivo jar não modular"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of(u"  -M, --no-manifest          Não cria um arquivo de manifesto para as entradas"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of(u"      --warn-if-resolved     Dica para que uma ferramenta emita uma advertência se o módulo\n                             for resolvido. Um destes: deprecated, deprecated-for-removal,\n                             ou incubating"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(u" Modo de operação principal:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.create"_s),
			$of("  -c, --create               Cria o arquivo compactado"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.describe-module"_s),
			$of(u"  -d, --describe-module      Imprime o descritor do módulo ou nome do módulo automático"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.extract"_s),
			$of("  -x, --extract              Extrai arquivos nomeados (ou todos) do arquivo compactado"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of(u"  -i, --generate-index=FILE  Gera informações de índice para os arquivos compactados jar \n                             especificados"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of(u"  -t, --list                 Lista o conteúdo do arquivo compactado"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of("  -u, --update               Atualiza um arquivo compactado jar existente"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(u" Outras opções:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of("  -h, --help[:compat]        Fornece esta ajuda ou, opcionalmente, a ajuda de compatibilidade"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of(u"      --help-extra           Fornecer ajuda sobre opções extras"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of(u"      --version              Imprime a versão do programa"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(u" Arquivo compactado será um arquivo jar modular se um descritor de módulo, \'module-info.class\', estiver\n localizado na raiz dos diretórios em questão ou na raiz do próprio arquivo compactado\n jar. As seguintes operações só são válidas ao criar um jar modular\n ou atualizar um jar não modular existente: \'--module-version\',\n \'--hash-modules\' e \'--module-path\'.\n\n Argumentos obrigatórios ou opcionais para opções longas também são obrigatórios ou opcionais\n para quaisquer opções curtas correspondentes."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of(u"Uso: arquivos [OPTION...] [ [--release VERSION] [-C dir] jar]...\njar cria um arquivo compactado para classes e recursos, e pode manipular ou\nrestaurar classes ou recursos individuais de um arquivo compactado.\n\n Exemplos:\n # Cria um arquivo compactado chamado classes.jar com dois arquivos de classe:\n jar --create --file classes.jar Foo.class Bar.class\n # Cria um arquivo compactado usando um manifesto existente, com todos os arquivos em foo/:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # Cria um arquivo compactado jar modular, em que o descritor do módulo se localiza em\n # classes/module-info.class:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # Atualiza um arquivo jar não modular existente para um jar modular:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # Cria um arquivo jar de várias releases, colocando alguns arquivos no diretório META-INF/versions/9:\n jar --cre"
				"ate --file mr.jar -C foo classes --release 9 -C foo9 classes\n\nPara reduzir ou simplificar o comando jar, você pode especificar argumentos em um arquivo de texto separado\ne especificá-lo no comando jar com o sinal de arroba (@) como um prefixo.\n\n Exemplos:\n # Lê opções adicionais e lista os arquivos de classe do arquivo classes.list\n jar --create --file my.jar @classes.list\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary"_s),
			$of("Uso: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary.try"_s),
			$of(u"Tente `jar --ajuda\' para obter mais informações."_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.manifest"_s),
			$of("manifesto adicionado"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.module-info"_s),
			$of("module-info: {0} adicionado"_s)
		}),
		$$new($ObjectArray, {
			$of("out.adding"_s),
			$of("adicionando: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.automodule"_s),
			$of(u"Nenhum descritor de módulo encontrado. Módulo automático derivado."_s)
		}),
		$$new($ObjectArray, {
			$of("out.create"_s),
			$of("  criado: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.deflated"_s),
			$of("(compactado {0}%)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.extracted"_s),
			$of(u"extraído: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.ignore.entry"_s),
			$of("ignorando entrada {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.inflated"_s),
			$of(" inflado: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.size"_s),
			$of(u"(entrada = {0}) (saída= {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("out.stored"_s),
			$of("(armazenado 0%)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.manifest"_s),
			$of("manifesto atualizado"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.module-info"_s),
			$of("module-info: {0} atualizado"_s)
		}),
		$$new($ObjectArray, {
			$of("usage.compat"_s),
			$of(u"Interface de Compatibilidade:\nUso: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] arquivos] ...\nOpções:\n    -c  cria novo arquivo compactado\n    -t  lista o sumário do arquivo compactado\n    -x  extrai arquivos com o nome (ou todos) do arquivo compactado\n    -u  atualiza o arquivo compactado existente\n    -v  gera saída detalhada na saída padrão\n    -f  especifica o nome do arquivo compactado\n    -m  inclui as informações do manifesto do arquivo de manifesto especificado\n    -n   executa a normalização Pack200 após a criação de um novo arquivo compactado\n    -e  especifica o ponto de entrada da aplicativo para aplicativo stand-alone \n        empacotada em um arquivo jar executável\n    -0  armazena somente; não usa compactação ZIP\n    -P  preserva os componentes \'/\' inicial (caminho absoluto) e \"..\" (diretório pai) nos nomes dos arquivos\n    -M  não cria um arquivo de manifesto para as entradas\n    -i  gera informações de índice para os arquivos jar especificados\n    -C  passa para o d"
				"iretório especificado e inclui o arquivo a seguir\nSe um arquivo também for um diretório, ele será processado repetidamente.\nO nome do arquivo de manifesto, o nome do arquivo compactado e o nome do ponto de entrada são\nespecificados na mesma ordem dos flags \'m\', \'f\' e \'e\'.\n\nExemplo 1: para arquivar dois arquivos de classe em um arquivo compactado denominado classes.jar: \n       jar cvf classes.jar Foo.class Bar.class \nExemplo 2: use um arquivo de manifesto existente \'mymanifest\' e arquive todos os\n           arquivos no diretório foo/ em \'classes.jar\': \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of(u"entrada {0} com controle de versão inesperada"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of(u"Advertência: a entrada {0} é uma classe pública\nem um pacote oculto; colocar esse jar no caminho de classe resultará\nem interfaces públicas incompatíveis"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of(u"Advertência: a entrada {0} contém uma classe\nidêntica a uma que já está no jar"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.resources.with.same.name"_s),
			$of(u"Advertência: entrada {0}; diversos recursos com o mesmo nome"_s)
		})
	});
}

jar_pt_BR::jar_pt_BR() {
}

$Class* jar_pt_BR::load$($String* name, bool initialize) {
	$loadClass(jar_pt_BR, name, initialize, &_jar_pt_BR_ClassInfo_, allocate$jar_pt_BR);
	return class$;
}

$Class* jar_pt_BR::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun