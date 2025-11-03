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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(jar_pt_BR::*)()>(&jar_pt_BR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
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
			$of(u"A op\u00e7\u00e3o \'-d, --describe-module\' n\u00e3o exige a especifica\u00e7\u00e3o de arquivos de entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.eflag"_s),
			$of(u"o flag \'e\' e manifesto com o atributo \'Main-Class\' n\u00e3o podem ser especificados \njuntos!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.file.arg"_s),
			$of("Erro ao fazer parsing dos argumentos de arquivo"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.option"_s),
			$of(u"Uma das op\u00e7\u00f5es -{ctxuid} deve ser especificada."_s)
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
			$of(u"n\u00e3o \u00e9 poss\u00edvel abrir: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of(u"{0} : n\u00e3o foi poss\u00edvel criar o diret\u00f3rio"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of(u"N\u00e3o foi poss\u00edvel criar um arquivo tempor\u00e1rio"_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of(u"M\u00f3dulo de hashing com {0} depend\u00eancias. N\u00e3o \u00e9 poss\u00edvel localizar o m\u00f3dulo {1} no caminho do m\u00f3dulo"_s)
		}),
		$$new($ObjectArray, {
			$of("error.illegal.option"_s),
			$of(u"Op\u00e7\u00e3o inv\u00e1lida: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.incorrect.length"_s),
			$of("largura incorreta durante o processamento: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.invalid.versioned.module.attribute"_s),
			$of(u"Atributo {0} de descritor de m\u00f3dulo inv\u00e1lido"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.arg"_s),
			$of(u"a op\u00e7\u00e3o {0}  exige um argumento"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.provider"_s),
			$of(u"Prestador de servi\u00e7os  n\u00e3o encontrado: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.descriptor.not.found"_s),
			$of(u"Descritor de m\u00f3dulo n\u00e3o encontrado"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.options.without.info"_s),
			$of(u"Um dentre --module-version ou --hash-modules est\u00e1 sem module-info.class"_s)
		}),
		$$new($ObjectArray, {
			$of("error.multiple.main.operations"_s),
			$of(u"Voc\u00ea n\u00e3o pode especificar mais de um op\u00e7\u00e3o \'-cuxtid\'"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.operative.descriptor"_s),
			$of(u"Nenhum descritor de opera\u00e7\u00e3o para a release: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of(u"Nenhum descritor do m\u00f3dulo-raiz, especifique --release"_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of(u"{0} : n\u00e3o h\u00e1 tal arquivo ou diret\u00f3rio"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of(u"entrada {0} com controle de vers\u00e3o inesperada para a release {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of(u"release {0} n\u00e3o v\u00e1lida"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of(u"release {0} n\u00e3o v\u00e1lida; deve ser >= 9"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of(u"N\u00e3o \u00e9 poss\u00edvel obter o descritor do m\u00f3dulo para: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unexpected.module-info"_s),
			$of(u"Descritor de m\u00f3dulo inesperado {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unrecognized.option"_s),
			$of(u"op\u00e7\u00e3o n\u00e3o reconhecida : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.bad.entry.name"_s),
			$of("nome de entrada incorreto, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of(u"a entrada {0} cont\u00e9m uma classe com api diferente da vers\u00e3o anterior"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of(u"nome de entrada {0} muito pequeno, n\u00e3o \u00e9 um diret\u00f3rio"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of(u"a entrada {0} tem uma vers\u00e3o de classe incompat\u00edvel com uma vers\u00e3o anterior"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of(u"module-info.class em um diret\u00f3rio com controle de vers\u00e3o cont\u00e9m \"exports\" diferente"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of(u"{0}: module-info.class em um diret\u00f3rio com controle de vers\u00e3o cont\u00e9m \"main-class\" diferente"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of(u"module-info.class em um diret\u00f3rio com controle de vers\u00e3o cont\u00e9m nome incorreto"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of(u"module-info.class em um diret\u00f3rio com controle de vers\u00e3o cont\u00e9m \"opens\" diferente"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of(u"module-info.class em um diret\u00f3rio com controle de vers\u00e3o cont\u00e9m \"provides\" diferente"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of(u"module-info.class em um diret\u00f3rio com controle de vers\u00e3o cont\u00e9m \"requires\" adicional"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of(u"module-info.class em um diret\u00f3rio com controle de vers\u00e3o falta \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of(u"module-info.class em um diret\u00f3rio com controle de vers\u00e3o cont\u00e9m \"requires transitive\" adicional"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of(u"{0}: module-info.class em um diret\u00f3rio com controle de vers\u00e3o cont\u00e9m \"version\" diferente"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of(u"a entrada {0} \u00e9 uma classe aninhada isolada"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of(u"n\u00e3o \u00e9 poss\u00edvel validar {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of(u"arquivo jar {0} multi-release inv\u00e1lido exclu\u00eddo"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of(u"a entrada {0} cont\u00e9m uma classe com o nome interno {1}; os nomes n\u00e3o correspondem"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of(u"a entrada {0} cont\u00e9m uma nova classe p\u00fablica n\u00e3o encontrada nas entradas de base"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of(u"o nome de entrada {0} n\u00e3o tem um n\u00famero de vers\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of("Erro ao gravar o arquivo jar existente"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(u" Modificadores de opera\u00e7\u00e3o v\u00e1lidos em qualquer modo:\n\n  -C DIR                     Altera para o diret\u00f3rio especificado e inclui o\n                             seguinte arquivo:"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of(u"  -f, --file=FILE            O nome do arquivo compactado. Quando omitido, stdin ou\n                             stdout ser\u00e1 usado com base na opera\u00e7\u00e3o\n      --release VERSION      Coloca todos os arquivos a seguir em um diret\u00f3rio com controle de vers\u00e3o\n                             do arquivo jar (i.e. META-INF/versions/VERSION/)"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of(u"  -v, --verbose              Gera sa\u00edda detalhada na sa\u00edda padr\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(u" Modificadores de opera\u00e7\u00e3o v\u00e1lidos somente no modo de cria\u00e7\u00e3o:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of(u"  -n, --normalize            Normaliza as informa\u00e7\u00f5es no novo arquivo compactado jar\n                             ap\u00f3s a cria\u00e7\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(u" Modificadores de opera\u00e7\u00e3o v\u00e1lidos somente no modo de cria\u00e7\u00e3o e atualiza\u00e7\u00e3o:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of(u"      --do-not-resolve-by-default  Excluir do conjunto de m\u00f3dulos raiz padr\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of(u"      --hash-modules=PATTERN Calcula e registra os hashes dos m\u00f3dulos\n                             correlacionado pelo padr\u00e3o fornecido e do qual depende\n                             direta ou indiretamente em um arquivo jar modular que est\u00e1 sendo\n                             criado ou em um arquivo jar n\u00e3o modular que est\u00e1 sendo atualizado"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(u" Modificadores de opera\u00e7\u00e3o v\u00e1lidos somente no modo de cria\u00e7\u00e3o, atualiza\u00e7\u00e3o e gera\u00e7\u00e3o de \u00edndice:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of(u"  -0, --no-compress          Somente armazenamento; n\u00e3o use compacta\u00e7\u00e3o ZIP"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of(u"  -e, --main-class=CLASSNAME O ponto de entrada do aplicativo para aplicativos\n                             stand-alone empacotados em um arquivo compactado jar modular\n                             ou execut\u00e1vel"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of(u"  -m, --manifest=FILE        Inclui as informa\u00e7\u00f5es de manifesto provenientes do arquivo de\n                             manifesto em quest\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of(u"  -p, --module-path          Local de depend\u00eancia de m\u00f3dulo para gerar\n                             o hash"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of(u"      --module-version=VERSION    A vers\u00e3o do m\u00f3dulo, ao criar um arquivo jar\n                             modular, ou atualizar um arquivo jar n\u00e3o modular"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of(u"  -M, --no-manifest          N\u00e3o cria um arquivo de manifesto para as entradas"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of(u"      --warn-if-resolved     Dica para que uma ferramenta emita uma advert\u00eancia se o m\u00f3dulo\n                             for resolvido. Um destes: deprecated, deprecated-for-removal,\n                             ou incubating"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(u" Modo de opera\u00e7\u00e3o principal:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.create"_s),
			$of("  -c, --create               Cria o arquivo compactado"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.describe-module"_s),
			$of(u"  -d, --describe-module      Imprime o descritor do m\u00f3dulo ou nome do m\u00f3dulo autom\u00e1tico"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.extract"_s),
			$of("  -x, --extract              Extrai arquivos nomeados (ou todos) do arquivo compactado"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of(u"  -i, --generate-index=FILE  Gera informa\u00e7\u00f5es de \u00edndice para os arquivos compactados jar \n                             especificados"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of(u"  -t, --list                 Lista o conte\u00fado do arquivo compactado"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of("  -u, --update               Atualiza um arquivo compactado jar existente"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(u" Outras op\u00e7\u00f5es:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of("  -h, --help[:compat]        Fornece esta ajuda ou, opcionalmente, a ajuda de compatibilidade"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of(u"      --help-extra           Fornecer ajuda sobre op\u00e7\u00f5es extras"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of(u"      --version              Imprime a vers\u00e3o do programa"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(u" Arquivo compactado ser\u00e1 um arquivo jar modular se um descritor de m\u00f3dulo, \'module-info.class\', estiver\n localizado na raiz dos diret\u00f3rios em quest\u00e3o ou na raiz do pr\u00f3prio arquivo compactado\n jar. As seguintes opera\u00e7\u00f5es s\u00f3 s\u00e3o v\u00e1lidas ao criar um jar modular\n ou atualizar um jar n\u00e3o modular existente: \'--module-version\',\n \'--hash-modules\' e \'--module-path\'.\n\n Argumentos obrigat\u00f3rios ou opcionais para op\u00e7\u00f5es longas tamb\u00e9m s\u00e3o obrigat\u00f3rios ou opcionais\n para quaisquer op\u00e7\u00f5es curtas correspondentes."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of(u"Uso: arquivos [OPTION...] [ [--release VERSION] [-C dir] jar]...\njar cria um arquivo compactado para classes e recursos, e pode manipular ou\nrestaurar classes ou recursos individuais de um arquivo compactado.\n\n Exemplos:\n # Cria um arquivo compactado chamado classes.jar com dois arquivos de classe:\n jar --create --file classes.jar Foo.class Bar.class\n # Cria um arquivo compactado usando um manifesto existente, com todos os arquivos em foo/:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # Cria um arquivo compactado jar modular, em que o descritor do m\u00f3dulo se localiza em\n # classes/module-info.class:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # Atualiza um arquivo jar n\u00e3o modular existente para um jar modular:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # Cria um arquivo jar de v\u00e1rias releases, colocando alguns arquivos no diret\u00f3rio META-INF/versions/9:\n jar --cre"
				"ate --file mr.jar -C foo classes --release 9 -C foo9 classes\n\nPara reduzir ou simplificar o comando jar, voc\u00ea pode especificar argumentos em um arquivo de texto separado\ne especific\u00e1-lo no comando jar com o sinal de arroba (@) como um prefixo.\n\n Exemplos:\n # L\u00ea op\u00e7\u00f5es adicionais e lista os arquivos de classe do arquivo classes.list\n jar --create --file my.jar @classes.list\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary"_s),
			$of("Uso: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary.try"_s),
			$of(u"Tente `jar --ajuda\' para obter mais informa\u00e7\u00f5es."_s)
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
			$of(u"Nenhum descritor de m\u00f3dulo encontrado. M\u00f3dulo autom\u00e1tico derivado."_s)
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
			$of(u"extra\u00eddo: {0}"_s)
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
			$of(u"(entrada = {0}) (sa\u00edda= {1})"_s)
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
			$of(u"Interface de Compatibilidade:\nUso: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] arquivos] ...\nOp\u00e7\u00f5es:\n    -c  cria novo arquivo compactado\n    -t  lista o sum\u00e1rio do arquivo compactado\n    -x  extrai arquivos com o nome (ou todos) do arquivo compactado\n    -u  atualiza o arquivo compactado existente\n    -v  gera sa\u00edda detalhada na sa\u00edda padr\u00e3o\n    -f  especifica o nome do arquivo compactado\n    -m  inclui as informa\u00e7\u00f5es do manifesto do arquivo de manifesto especificado\n    -n   executa a normaliza\u00e7\u00e3o Pack200 ap\u00f3s a cria\u00e7\u00e3o de um novo arquivo compactado\n    -e  especifica o ponto de entrada da aplicativo para aplicativo stand-alone \n        empacotada em um arquivo jar execut\u00e1vel\n    -0  armazena somente; n\u00e3o usa compacta\u00e7\u00e3o ZIP\n    -P  preserva os componentes \'/\' inicial (caminho absoluto) e \"..\" (diret\u00f3rio pai) nos nomes dos arquivos\n    -M  n\u00e3o cria um arquivo de manifesto para as entradas\n    -i  gera informa\u00e7\u00f5es de \u00edndice para os arquivos jar especificados\n    -C  passa para o d"
				"iret\u00f3rio especificado e inclui o arquivo a seguir\nSe um arquivo tamb\u00e9m for um diret\u00f3rio, ele ser\u00e1 processado repetidamente.\nO nome do arquivo de manifesto, o nome do arquivo compactado e o nome do ponto de entrada s\u00e3o\nespecificados na mesma ordem dos flags \'m\', \'f\' e \'e\'.\n\nExemplo 1: para arquivar dois arquivos de classe em um arquivo compactado denominado classes.jar: \n       jar cvf classes.jar Foo.class Bar.class \nExemplo 2: use um arquivo de manifesto existente \'mymanifest\' e arquive todos os\n           arquivos no diret\u00f3rio foo/ em \'classes.jar\': \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of(u"entrada {0} com controle de vers\u00e3o inesperada"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of(u"Advert\u00eancia: a entrada {0} \u00e9 uma classe p\u00fablica\nem um pacote oculto; colocar esse jar no caminho de classe resultar\u00e1\nem interfaces p\u00fablicas incompat\u00edveis"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of(u"Advert\u00eancia: a entrada {0} cont\u00e9m uma classe\nid\u00eantica a uma que j\u00e1 est\u00e1 no jar"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.resources.with.same.name"_s),
			$of(u"Advert\u00eancia: entrada {0}; diversos recursos com o mesmo nome"_s)
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