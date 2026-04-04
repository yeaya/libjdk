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

void jar_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_pt_BR::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"error.bad.cflag"_s,
			"flag \'c\' requer que os arquivos de manifesto ou entrada sejam especificados!"_s
		}),
		$$new($ObjectArray, {
			"error.bad.dflag"_s,
			u"A opção \'-d, --describe-module\' não exige a especificação de arquivos de entrada"_s
		}),
		$$new($ObjectArray, {
			"error.bad.eflag"_s,
			u"o flag \'e\' e manifesto com o atributo \'Main-Class\' não podem ser especificados \njuntos!"_s
		}),
		$$new($ObjectArray, {
			"error.bad.file.arg"_s,
			"Erro ao fazer parsing dos argumentos de arquivo"_s
		}),
		$$new($ObjectArray, {
			"error.bad.option"_s,
			u"Uma das opções -{ctxuid} deve ser especificada."_s
		}),
		$$new($ObjectArray, {
			"error.bad.reason"_s,
			"motivo incorreto: {0}, deve ser deprecated, deprecated-for-removal ou incubating"_s
		}),
		$$new($ObjectArray, {
			"error.bad.uflag"_s,
			"o flag \'u\' requer que arquivos de manifesto, o flag \'e\' ou arquivos de entrada sejam especificados!"_s
		}),
		$$new($ObjectArray, {
			"error.cant.open"_s,
			u"não é possível abrir: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.create.dir"_s,
			u"{0} : não foi possível criar o diretório"_s
		}),
		$$new($ObjectArray, {
			"error.create.tempfile"_s,
			u"Não foi possível criar um arquivo temporário"_s
		}),
		$$new($ObjectArray, {
			"error.hash.dep"_s,
			u"Módulo de hashing com {0} dependências. Não é possível localizar o módulo {1} no caminho do módulo"_s
		}),
		$$new($ObjectArray, {
			"error.illegal.option"_s,
			u"Opção inválida: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.incorrect.length"_s,
			"largura incorreta durante o processamento: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.invalid.versioned.module.attribute"_s,
			u"Atributo {0} de descritor de módulo inválido"_s
		}),
		$$new($ObjectArray, {
			"error.missing.arg"_s,
			u"a opção {0}  exige um argumento"_s
		}),
		$$new($ObjectArray, {
			"error.missing.provider"_s,
			u"Prestador de serviços  não encontrado: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.module.descriptor.not.found"_s,
			u"Descritor de módulo não encontrado"_s
		}),
		$$new($ObjectArray, {
			"error.module.options.without.info"_s,
			u"Um dentre --module-version ou --hash-modules está sem module-info.class"_s
		}),
		$$new($ObjectArray, {
			"error.multiple.main.operations"_s,
			u"Você não pode especificar mais de um opção \'-cuxtid\'"_s
		}),
		$$new($ObjectArray, {
			"error.no.operative.descriptor"_s,
			u"Nenhum descritor de operação para a release: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.no.root.descriptor"_s,
			u"Nenhum descritor do módulo-raiz, especifique --release"_s
		}),
		$$new($ObjectArray, {
			"error.nosuch.fileordir"_s,
			u"{0} : não há tal arquivo ou diretório"_s
		}),
		$$new($ObjectArray, {
			"error.release.unexpected.versioned.entry"_s,
			u"entrada {0} com controle de versão inesperada para a release {1}"_s
		}),
		$$new($ObjectArray, {
			"error.release.value.notnumber"_s,
			u"release {0} não válida"_s
		}),
		$$new($ObjectArray, {
			"error.release.value.toosmall"_s,
			u"release {0} não válida; deve ser >= 9"_s
		}),
		$$new($ObjectArray, {
			"error.unable.derive.automodule"_s,
			u"Não é possível obter o descritor do módulo para: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.unexpected.module-info"_s,
			u"Descritor de módulo inesperado {0}"_s
		}),
		$$new($ObjectArray, {
			"error.unrecognized.option"_s,
			u"opção não reconhecida : {0}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.bad.entry.name"_s,
			"nome de entrada incorreto, {0}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.different.api"_s,
			u"a entrada {0} contém uma classe com api diferente da versão anterior"_s
		}),
		$$new($ObjectArray, {
			"error.validator.entryname.tooshort"_s,
			u"nome de entrada {0} muito pequeno, não é um diretório"_s
		}),
		$$new($ObjectArray, {
			"error.validator.incompatible.class.version"_s,
			u"a entrada {0} tem uma versão de classe incompatível com uma versão anterior"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.exports.notequal"_s,
			u"module-info.class em um diretório com controle de versão contém \"exports\" diferente"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.manclass.notequal"_s,
			u"{0}: module-info.class em um diretório com controle de versão contém \"main-class\" diferente"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.name.notequal"_s,
			u"module-info.class em um diretório com controle de versão contém nome incorreto"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.opens.notequal"_s,
			u"module-info.class em um diretório com controle de versão contém \"opens\" diferente"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.provides.notequal"_s,
			u"module-info.class em um diretório com controle de versão contém \"provides\" diferente"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.added"_s,
			u"module-info.class em um diretório com controle de versão contém \"requires\" adicional"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.dropped"_s,
			u"module-info.class em um diretório com controle de versão falta \"requires\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.transitive"_s,
			u"module-info.class em um diretório com controle de versão contém \"requires transitive\" adicional"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.version.notequal"_s,
			u"{0}: module-info.class em um diretório com controle de versão contém \"version\" diferente"_s
		}),
		$$new($ObjectArray, {
			"error.validator.isolated.nested.class"_s,
			u"a entrada {0} é uma classe aninhada isolada"_s
		}),
		$$new($ObjectArray, {
			"error.validator.jarfile.exception"_s,
			u"não é possível validar {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.jarfile.invalid"_s,
			u"arquivo jar {0} multi-release inválido excluído"_s
		}),
		$$new($ObjectArray, {
			"error.validator.names.mismatch"_s,
			u"a entrada {0} contém uma classe com o nome interno {1}; os nomes não correspondem"_s
		}),
		$$new($ObjectArray, {
			"error.validator.new.public.class"_s,
			u"a entrada {0} contém uma nova classe pública não encontrada nas entradas de base"_s
		}),
		$$new($ObjectArray, {
			"error.validator.version.notnumber"_s,
			u"o nome de entrada {0} não tem um número de versão"_s
		}),
		$$new($ObjectArray, {
			"error.write.file"_s,
			"Erro ao gravar o arquivo jar existente"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any"_s,
			u" Modificadores de operação válidos em qualquer modo:\n\n  -C DIR                     Altera para o diretório especificado e inclui o\n                             seguinte arquivo:"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any.file"_s,
			u"  -f, --file=FILE            O nome do arquivo compactado. Quando omitido, stdin ou\n                             stdout será usado com base na operação\n      --release VERSION      Coloca todos os arquivos a seguir em um diretório com controle de versão\n                             do arquivo jar (i.e. META-INF/versions/VERSION/)"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any.verbose"_s,
			u"  -v, --verbose              Gera saída detalhada na saída padrão"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create"_s,
			u" Modificadores de operação válidos somente no modo de criação:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.normalize"_s,
			u"  -n, --normalize            Normaliza as informações no novo arquivo compactado jar\n                             após a criação"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update"_s,
			u" Modificadores de operação válidos somente no modo de criação e atualização:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.do-not-resolve-by-default"_s,
			u"      --do-not-resolve-by-default  Excluir do conjunto de módulos raiz padrão"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.hash-modules"_s,
			u"      --hash-modules=PATTERN Calcula e registra os hashes dos módulos\n                             correlacionado pelo padrão fornecido e do qual depende\n                             direta ou indiretamente em um arquivo jar modular que está sendo\n                             criado ou em um arquivo jar não modular que está sendo atualizado"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.index"_s,
			u" Modificadores de operação válidos somente no modo de criação, atualização e geração de índice:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.index.no-compress"_s,
			u"  -0, --no-compress          Somente armazenamento; não use compactação ZIP"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.main-class"_s,
			u"  -e, --main-class=CLASSNAME O ponto de entrada do aplicativo para aplicativos\n                             stand-alone empacotados em um arquivo compactado jar modular\n                             ou executável"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.manifest"_s,
			u"  -m, --manifest=FILE        Inclui as informações de manifesto provenientes do arquivo de\n                             manifesto em questão"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.module-path"_s,
			u"  -p, --module-path          Local de dependência de módulo para gerar\n                             o hash"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.module-version"_s,
			u"      --module-version=VERSION    A versão do módulo, ao criar um arquivo jar\n                             modular, ou atualizar um arquivo jar não modular"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.no-manifest"_s,
			u"  -M, --no-manifest          Não cria um arquivo de manifesto para as entradas"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.warn-if-resolved"_s,
			u"      --warn-if-resolved     Dica para que uma ferramenta emita uma advertência se o módulo\n                             for resolvido. Um destes: deprecated, deprecated-for-removal,\n                             ou incubating"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main"_s,
			u" Modo de operação principal:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.create"_s,
			"  -c, --create               Cria o arquivo compactado"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.describe-module"_s,
			u"  -d, --describe-module      Imprime o descritor do módulo ou nome do módulo automático"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.extract"_s,
			"  -x, --extract              Extrai arquivos nomeados (ou todos) do arquivo compactado"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.generate-index"_s,
			u"  -i, --generate-index=FILE  Gera informações de índice para os arquivos compactados jar \n                             especificados"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.list"_s,
			u"  -t, --list                 Lista o conteúdo do arquivo compactado"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.update"_s,
			"  -u, --update               Atualiza um arquivo compactado jar existente"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other"_s,
			u" Outras opções:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.help"_s,
			"  -h, --help[:compat]        Fornece esta ajuda ou, opcionalmente, a ajuda de compatibilidade"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.help-extra"_s,
			u"      --help-extra           Fornecer ajuda sobre opções extras"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.version"_s,
			u"      --version              Imprime a versão do programa"_s
		}),
		$$new($ObjectArray, {
			"main.help.postopt"_s,
			u" Arquivo compactado será um arquivo jar modular se um descritor de módulo, \'module-info.class\', estiver\n localizado na raiz dos diretórios em questão ou na raiz do próprio arquivo compactado\n jar. As seguintes operações só são válidas ao criar um jar modular\n ou atualizar um jar não modular existente: \'--module-version\',\n \'--hash-modules\' e \'--module-path\'.\n\n Argumentos obrigatórios ou opcionais para opções longas também são obrigatórios ou opcionais\n para quaisquer opções curtas correspondentes."_s
		}),
		$$new($ObjectArray, {
			"main.help.preopt"_s,
			u"Uso: arquivos [OPTION...] [ [--release VERSION] [-C dir] jar]...\njar cria um arquivo compactado para classes e recursos, e pode manipular ou\nrestaurar classes ou recursos individuais de um arquivo compactado.\n\n Exemplos:\n # Cria um arquivo compactado chamado classes.jar com dois arquivos de classe:\n jar --create --file classes.jar Foo.class Bar.class\n # Cria um arquivo compactado usando um manifesto existente, com todos os arquivos em foo/:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # Cria um arquivo compactado jar modular, em que o descritor do módulo se localiza em\n # classes/module-info.class:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # Atualiza um arquivo jar não modular existente para um jar modular:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # Cria um arquivo jar de várias releases, colocando alguns arquivos no diretório META-INF/versions/9:\n jar --cre"
				"ate --file mr.jar -C foo classes --release 9 -C foo9 classes\n\nPara reduzir ou simplificar o comando jar, você pode especificar argumentos em um arquivo de texto separado\ne especificá-lo no comando jar com o sinal de arroba (@) como um prefixo.\n\n Exemplos:\n # Lê opções adicionais e lista os arquivos de classe do arquivo classes.list\n jar --create --file my.jar @classes.list\n"_s
		}),
		$$new($ObjectArray, {
			"main.usage.summary"_s,
			"Uso: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s
		}),
		$$new($ObjectArray, {
			"main.usage.summary.try"_s,
			u"Tente `jar --ajuda\' para obter mais informações."_s
		}),
		$$new($ObjectArray, {
			"out.added.manifest"_s,
			"manifesto adicionado"_s
		}),
		$$new($ObjectArray, {
			"out.added.module-info"_s,
			"module-info: {0} adicionado"_s
		}),
		$$new($ObjectArray, {
			"out.adding"_s,
			"adicionando: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.automodule"_s,
			u"Nenhum descritor de módulo encontrado. Módulo automático derivado."_s
		}),
		$$new($ObjectArray, {
			"out.create"_s,
			"  criado: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.deflated"_s,
			"(compactado {0}%)"_s
		}),
		$$new($ObjectArray, {
			"out.extracted"_s,
			u"extraído: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.ignore.entry"_s,
			"ignorando entrada {0}"_s
		}),
		$$new($ObjectArray, {
			"out.inflated"_s,
			" inflado: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.size"_s,
			u"(entrada = {0}) (saída= {1})"_s
		}),
		$$new($ObjectArray, {
			"out.stored"_s,
			"(armazenado 0%)"_s
		}),
		$$new($ObjectArray, {
			"out.update.manifest"_s,
			"manifesto atualizado"_s
		}),
		$$new($ObjectArray, {
			"out.update.module-info"_s,
			"module-info: {0} atualizado"_s
		}),
		$$new($ObjectArray, {
			"usage.compat"_s,
			u"Interface de Compatibilidade:\nUso: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] arquivos] ...\nOpções:\n    -c  cria novo arquivo compactado\n    -t  lista o sumário do arquivo compactado\n    -x  extrai arquivos com o nome (ou todos) do arquivo compactado\n    -u  atualiza o arquivo compactado existente\n    -v  gera saída detalhada na saída padrão\n    -f  especifica o nome do arquivo compactado\n    -m  inclui as informações do manifesto do arquivo de manifesto especificado\n    -n   executa a normalização Pack200 após a criação de um novo arquivo compactado\n    -e  especifica o ponto de entrada da aplicativo para aplicativo stand-alone \n        empacotada em um arquivo jar executável\n    -0  armazena somente; não usa compactação ZIP\n    -P  preserva os componentes \'/\' inicial (caminho absoluto) e \"..\" (diretório pai) nos nomes dos arquivos\n    -M  não cria um arquivo de manifesto para as entradas\n    -i  gera informações de índice para os arquivos jar especificados\n    -C  passa para o d"
				"iretório especificado e inclui o arquivo a seguir\nSe um arquivo também for um diretório, ele será processado repetidamente.\nO nome do arquivo de manifesto, o nome do arquivo compactado e o nome do ponto de entrada são\nespecificados na mesma ordem dos flags \'m\', \'f\' e \'e\'.\n\nExemplo 1: para arquivar dois arquivos de classe em um arquivo compactado denominado classes.jar: \n       jar cvf classes.jar Foo.class Bar.class \nExemplo 2: use um arquivo de manifesto existente \'mymanifest\' e arquive todos os\n           arquivos no diretório foo/ em \'classes.jar\': \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s
		}),
		$$new($ObjectArray, {
			"warn.release.unexpected.versioned.entry"_s,
			u"entrada {0} com controle de versão inesperada"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.concealed.public.class"_s,
			u"Advertência: a entrada {0} é uma classe pública\nem um pacote oculto; colocar esse jar no caminho de classe resultará\nem interfaces públicas incompatíveis"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.identical.entry"_s,
			u"Advertência: a entrada {0} contém uma classe\nidêntica a uma que já está no jar"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.resources.with.same.name"_s,
			u"Advertência: entrada {0}; diversos recursos com o mesmo nome"_s
		})
	});
}

jar_pt_BR::jar_pt_BR() {
}

$Class* jar_pt_BR::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(jar_pt_BR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(jar_pt_BR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.tools.jar.resources.jar_pt_BR",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(jar_pt_BR, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(jar_pt_BR);
	});
	return class$;
}

$Class* jar_pt_BR::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun