#include <sun/tools/jar/resources/jar_es.h>

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

$MethodInfo _jar_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(jar_es, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(jar_es, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _jar_es_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.jar.resources.jar_es",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_jar_es_MethodInfo_
};

$Object* allocate$jar_es($Class* clazz) {
	return $of($alloc(jar_es));
}

void jar_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_es::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("error.bad.cflag"_s),
			$of(u"El indicador \'c\' necesita la especificación de archivos de manifiesto o de entrada."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.dflag"_s),
			$of(u"La opción \'-d, --describe-module\'  no requiere especificar archivos de entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.eflag"_s),
			$of("El indicador \'e\' y el manifiesto con el atributo \'Main-Class\' no pueden especificarse \na la vez."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.file.arg"_s),
			$of("Error al analizar los argumentos de archivo"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.option"_s),
			$of("Se debe especificar una de las opciones -{ctxuid}."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.reason"_s),
			$of(u"Motivo erróneo: {0}, debe ser en desuso, en desuso para eliminación o incubando"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.uflag"_s),
			$of(u"El indicador \'u\' necesita la especificación de archivos de manifiesto, de entrada o indicador \'e\'."_s)
		}),
		$$new($ObjectArray, {
			$of("error.cant.open"_s),
			$of("no se puede abrir: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of("{0} : no se ha podido crear el directorio"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of("No se ha podido crear el archivo temporal"_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of(u"Aplicando hash a las dependencias del módulo {0}, no se ha encontrado el módulo {1} en la ruta del módulo"_s)
		}),
		$$new($ObjectArray, {
			$of("error.illegal.option"_s),
			$of(u"Opción no permitida: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.incorrect.length"_s),
			$of("longitud incorrecta al procesar: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.invalid.versioned.module.attribute"_s),
			$of(u"Atributo de descriptor de módulo no válido {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.arg"_s),
			$of(u"la opción {0} necesita un argumento"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.provider"_s),
			$of("No se ha encontrado el proveedor de servicios: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.descriptor.not.found"_s),
			$of(u"No se ha encontrado el descriptor de módulo"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.options.without.info"_s),
			$of("Uno de --module-version o -hash-modules sin module-info.class"_s)
		}),
		$$new($ObjectArray, {
			$of("error.multiple.main.operations"_s),
			$of(u"No se puede especificar más de una opción \'-cuxtid\'"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.operative.descriptor"_s),
			$of(u"No hay ningún descriptor operativo para la versión: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of(u"No hay ningún descriptor de módulo de raíz, especifique --release"_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of("{0} : no existe tal archivo o directorio"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of(u"Entrada versionada inesperada {0} para la versión {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of(u"versión {0} no válida"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of(u"versión {0} no válida, debe ser >= 9"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of(u"No se ha podido derivar el descriptor de módulo para: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unexpected.module-info"_s),
			$of(u"Descriptor de módulo inesperado {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unrecognized.option"_s),
			$of(u"opción no reconocida: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.bad.entry.name"_s),
			$of("nombre de entrada con formato incorrecto, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of(u"la entrada {0} contiene una clase con una api diferente de la versión anterior"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of("el nombre de entrada {0} es demasiado corto, no es un directorio"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of(u"la entrada {0} tiene una versión de clase no compatible con una versión anterior"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of("module-info.class en un directorio con versiones contiene \"exports\" diferentes"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of("{0}: module-info.class  en un directorio con versiones contiene una \"main-class\" diferente"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of(u"module-info.class en un directorio con versión contiene un nombre incorrecto"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of("module-info.class en un directorio con versiones contiene \"opens\" diferentes"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of("module-info.class en un directorio con versiones contiene \"provides\" diferentes"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of(u"module-info.class en un directorio con versión contiene \"requires\" adicionales"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of("module-info.class en un directorio con versiones contiene \"requires\" que faltan"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of("module-info.class en un directorio con versiones contiene \"requires transitive\" adicionales"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of("{0}: module-info.class en un directorio con versiones contiene una \"version\" diferente"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of("la entrada {0} es una clase anidada aislada"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of("no puede validar {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of(u"se ha suprimido el archivo jar de varias versiones {0} no válido"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of("la entrada {0} contiene una clase con un nombre interno {1}, los nombres no coinciden"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of(u"la entrada {0} contiene una nueva clase pública que no está en las entradas de base"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of(u"el nombre de entrada {0} no tiene un número de versión"_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of("Error al escribir un archivo jar existente"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(u" Modificadores de operación válidos en cualquier modo:\n\n  -C DIR                     Cambiar al directorio especificado e incluir el\n                             siguiente archivo"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of(u"  -f, --file=FILE            El nombre del archivo. Si se omite, se usa stdin o\n                             stdout en función de la operación\n      --release VERSION      Se colocan todos los archivos siguientes en un directorio con versión\n                             del archivo jar (es decir, META-INF/versions/VERSION/)"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of(u"  -v, --verbose              Generar salida verbose en salida estándar"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(u" Modificadores de operación válidos solo en el modo de creación:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of(u"  -n, --normalize            Normalizar información en el nuevo archivo jar\n                             después de la creación"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(u" Modificadores de operación válidos solo en el modo de creación y de actualización:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of(u"      --do-not-resolve-by-default  Excluir del conjunto de módulos raíz por defecto"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of(u"      --hash-modules=PATTERN Calcular y registrar los hash de módulos\n                             que coinciden con el patrón proporcionado y que dependen\n                             directa o indirectamente de la creación de un archivo jar modular\n                             o de la actualización de un archivo jar no modular"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(u" Modificadores de operación válidos solo en el modo de creación, actualización y generación de índice:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of(u"  -0, --no-compress          Solo almacenar; no usar compresión ZIP"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of(u"  -e, --main-class=CLASSNAME Punto de entrada de la aplicación para aplicaciones\n                             autónomas agrupadas en un archivo jar modular o\n                             ejecutable"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of(u"  -m, --manifest=FILE        Incluir la información de manifiesto del archivo\n                             de manifiesto proporcionado"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of(u"  -p, --module-path          Ubicación de la dependencia de módulo para generar\n                             el hash"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of(u"      --module-version=VERSION    Versión del módulo, si se va a crear un archivo jar modular\n                             o actualizar un archivo jar no modular"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of(u"  -M, --no-manifest          No crear ningún archivo de manifiesto para las entradas"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of(u"      --warn-if-resolved     Indicación para que una herramienta emita una advertencia si el módulo\n                             se ha resuelto. En desuso, en desuso para eliminación\n                             o incubando"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(u" Modo de operación principal:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.create"_s),
			$of("  -c, --create               Crear el archivo"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.describe-module"_s),
			$of(u"  -d, --describe-module      Imprimir el descriptor de módulo, o un nombre de módulo automático"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.extract"_s),
			$of("  -x, --extract              Extraer determinados (o todos) los archivos del archivo"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of(u"  -i, --generate-index=FILE  Generar información de índice para los archivos jar\n                             especificados"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of("  -t, --list                 Mostrar la tabla de contenido del archivo"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of("  -u, --update               Actualizar un archivo jar existente"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(" Otras opciones:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of("  -h, --help[:compat]        Utilice este valor, u opcionalmente la compatibilidad, ayuda"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of("      --help-extra           Prestar ayuda en las opciones adicionales"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of(u"      --version              Imprimir versión del programa"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(u" Un archivo es un jar modular si el descriptor de módulo, \'module-info.class\', está\n en la raíz de los directorios proporcionados o en la raíz del archivo jar.\n Las siguientes operaciones solo son válidas si se va a crear un archivo jar modular\n o se va a actualizar un jar existente no modular: \'--module-version\',\n \'--hash-modules\' y \'--module-path\'.\n\n Los argumentos obligatorios u opcionales en las opciones largas también son obligatorios u opcionales\n en cualquiera de las opciones cortas."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of(u"Sintaxis: jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njar crea un archivo para las clases y recursos, y puede manipular o\nrestaurar clases individuales o recursos de un archivo.\n\n Ejemplos:\n # Crear un archivo denominado classes.jar con dos archivos de clase:\n jar --create --file classes.jar Foo.class Bar.class\n # Crear un archivo con un manifiesto existente, con todos los archivos en foo/:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # Crear un archivo jar modular, donde el descriptor de módulo está en\n # classes/module-info.class:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # Actualizar un jar no modular existente en un jar modular:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # Crear un archivo jar de varias versiones y colocar algunos archivos en el directorio META-INF/versions/9:\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 cla"
				"sses\n\nPara acortar o simplificar el comando jar, puede especificar argumentos en un archivo\nde texto separado y transmitirlos al comando jar con el símbolo de arroba (@) como prefijo.\n\n Ejemplos:\n # Leer opciones adicionales y mostrar los archivos de clases del archivo classes.list\n jar --create --file my.jar @classes.list\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary"_s),
			$of("Sintaxis: jar [OPTION...] [ [--release VERSION] [-C dir] archivos] ..."_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary.try"_s),
			$of(u"Intente `jar --help\' para obtener más información."_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.manifest"_s),
			$of("manifiesto agregado"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.module-info"_s),
			$of("module-info agregado: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.adding"_s),
			$of("agregando: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.automodule"_s),
			$of(u"No se ha encontrado ningún descriptor de módulo. Módulo automático derivado."_s)
		}),
		$$new($ObjectArray, {
			$of("out.create"_s),
			$of("  creado: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.deflated"_s),
			$of("(desinflado {0}%)"_s)
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
			$of("(entrada = {0}) (salida = {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("out.stored"_s),
			$of("(almacenado 0%)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.manifest"_s),
			$of("manifiesto actualizado"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.module-info"_s),
			$of("module-info actualizado: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("usage.compat"_s),
			$of(u"Interfaz de compatibilidad:\nSintaxis: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files] ...Opciones: \n    -c  crear nuevo archivo\n    -t  mostrar la tabla de contenido del archivo\n    -x   extraer el archivo mencionado (o todos) del archivo\n    -u  actualizar archivo existente\n    -v  generar salida detallada de los datos de salida estándar\n    -f  especificar nombre del archivo de almacenamiento\n    -m  incluir información de manifiesto del archivo de manifiesto especificado n    -n  realizar la normalización Pack200 después de crear un archivo nuevo\n    -e  especificar punto de entrada de la aplicación para la aplicación autónoma \n        que se incluye dentro de un archivo jar ejecutable\n    -0  solo almacenar; no utilizar compresión ZIP\n    -P  conservar componentes iniciales \'/\' (ruta absoluta) y \"..\" (directorio principal) en los nombres de archivo\n    -M  no crear un archivo de manifiesto para las entradas\n    -i  generar información de índice para los archivos jar especifi"
				"cados\n    -C  cambiar al directorio especificado e incluir el archivo siguiente\nSi algún archivo es un directorio, se procesará de forma recurrente. \nEl nombre del archivo de manifiesto, el nombre del archivo de almacenamiento y el nombre del punto de entrada se\n especifican en el mismo orden que los indicadores \'m\', \'f\' y \'e\'. \n\nEjemplo 1: para archivar archivos de dos clases en un archivo llamado classes.jar: \n       jar cvf classes.jar Foo.class Bar.class \nEjemplo 2: utilice un archivo de manifiesto existente \'mymanifest\' y archive todos los\n           archivos del directorio foo/ en \'classes.jar\': \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of("entrada versionada inesperada {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of(u"Advertencia: la entrada {0} es una clase pública\nen un paquete oculto. Colocar este archivo jar en la ruta de clase tendrá como resultado\ninterfaces públicas no compatibles"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of(u"Advertencia: la entrada {0} contiene una clase idéntica a una entrada que ya está en el archivo jar"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.resources.with.same.name"_s),
			$of("Advertencia: la entrada {0} tiene varios recursos con el mismo nombre"_s)
		})
	});
}

jar_es::jar_es() {
}

$Class* jar_es::load$($String* name, bool initialize) {
	$loadClass(jar_es, name, initialize, &_jar_es_ClassInfo_, allocate$jar_es);
	return class$;
}

$Class* jar_es::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun