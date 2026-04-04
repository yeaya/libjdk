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

void jar_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_es::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"error.bad.cflag"_s,
			u"El indicador \'c\' necesita la especificación de archivos de manifiesto o de entrada."_s
		}),
		$$new($ObjectArray, {
			"error.bad.dflag"_s,
			u"La opción \'-d, --describe-module\'  no requiere especificar archivos de entrada"_s
		}),
		$$new($ObjectArray, {
			"error.bad.eflag"_s,
			"El indicador \'e\' y el manifiesto con el atributo \'Main-Class\' no pueden especificarse \na la vez."_s
		}),
		$$new($ObjectArray, {
			"error.bad.file.arg"_s,
			"Error al analizar los argumentos de archivo"_s
		}),
		$$new($ObjectArray, {
			"error.bad.option"_s,
			"Se debe especificar una de las opciones -{ctxuid}."_s
		}),
		$$new($ObjectArray, {
			"error.bad.reason"_s,
			u"Motivo erróneo: {0}, debe ser en desuso, en desuso para eliminación o incubando"_s
		}),
		$$new($ObjectArray, {
			"error.bad.uflag"_s,
			u"El indicador \'u\' necesita la especificación de archivos de manifiesto, de entrada o indicador \'e\'."_s
		}),
		$$new($ObjectArray, {
			"error.cant.open"_s,
			"no se puede abrir: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.create.dir"_s,
			"{0} : no se ha podido crear el directorio"_s
		}),
		$$new($ObjectArray, {
			"error.create.tempfile"_s,
			"No se ha podido crear el archivo temporal"_s
		}),
		$$new($ObjectArray, {
			"error.hash.dep"_s,
			u"Aplicando hash a las dependencias del módulo {0}, no se ha encontrado el módulo {1} en la ruta del módulo"_s
		}),
		$$new($ObjectArray, {
			"error.illegal.option"_s,
			u"Opción no permitida: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.incorrect.length"_s,
			"longitud incorrecta al procesar: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.invalid.versioned.module.attribute"_s,
			u"Atributo de descriptor de módulo no válido {0}"_s
		}),
		$$new($ObjectArray, {
			"error.missing.arg"_s,
			u"la opción {0} necesita un argumento"_s
		}),
		$$new($ObjectArray, {
			"error.missing.provider"_s,
			"No se ha encontrado el proveedor de servicios: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.module.descriptor.not.found"_s,
			u"No se ha encontrado el descriptor de módulo"_s
		}),
		$$new($ObjectArray, {
			"error.module.options.without.info"_s,
			"Uno de --module-version o -hash-modules sin module-info.class"_s
		}),
		$$new($ObjectArray, {
			"error.multiple.main.operations"_s,
			u"No se puede especificar más de una opción \'-cuxtid\'"_s
		}),
		$$new($ObjectArray, {
			"error.no.operative.descriptor"_s,
			u"No hay ningún descriptor operativo para la versión: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.no.root.descriptor"_s,
			u"No hay ningún descriptor de módulo de raíz, especifique --release"_s
		}),
		$$new($ObjectArray, {
			"error.nosuch.fileordir"_s,
			"{0} : no existe tal archivo o directorio"_s
		}),
		$$new($ObjectArray, {
			"error.release.unexpected.versioned.entry"_s,
			u"Entrada versionada inesperada {0} para la versión {1}"_s
		}),
		$$new($ObjectArray, {
			"error.release.value.notnumber"_s,
			u"versión {0} no válida"_s
		}),
		$$new($ObjectArray, {
			"error.release.value.toosmall"_s,
			u"versión {0} no válida, debe ser >= 9"_s
		}),
		$$new($ObjectArray, {
			"error.unable.derive.automodule"_s,
			u"No se ha podido derivar el descriptor de módulo para: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.unexpected.module-info"_s,
			u"Descriptor de módulo inesperado {0}"_s
		}),
		$$new($ObjectArray, {
			"error.unrecognized.option"_s,
			u"opción no reconocida: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.bad.entry.name"_s,
			"nombre de entrada con formato incorrecto, {0}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.different.api"_s,
			u"la entrada {0} contiene una clase con una api diferente de la versión anterior"_s
		}),
		$$new($ObjectArray, {
			"error.validator.entryname.tooshort"_s,
			"el nombre de entrada {0} es demasiado corto, no es un directorio"_s
		}),
		$$new($ObjectArray, {
			"error.validator.incompatible.class.version"_s,
			u"la entrada {0} tiene una versión de clase no compatible con una versión anterior"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.exports.notequal"_s,
			"module-info.class en un directorio con versiones contiene \"exports\" diferentes"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.manclass.notequal"_s,
			"{0}: module-info.class  en un directorio con versiones contiene una \"main-class\" diferente"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.name.notequal"_s,
			u"module-info.class en un directorio con versión contiene un nombre incorrecto"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.opens.notequal"_s,
			"module-info.class en un directorio con versiones contiene \"opens\" diferentes"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.provides.notequal"_s,
			"module-info.class en un directorio con versiones contiene \"provides\" diferentes"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.added"_s,
			u"module-info.class en un directorio con versión contiene \"requires\" adicionales"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.dropped"_s,
			"module-info.class en un directorio con versiones contiene \"requires\" que faltan"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.transitive"_s,
			"module-info.class en un directorio con versiones contiene \"requires transitive\" adicionales"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.version.notequal"_s,
			"{0}: module-info.class en un directorio con versiones contiene una \"version\" diferente"_s
		}),
		$$new($ObjectArray, {
			"error.validator.isolated.nested.class"_s,
			"la entrada {0} es una clase anidada aislada"_s
		}),
		$$new($ObjectArray, {
			"error.validator.jarfile.exception"_s,
			"no puede validar {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.jarfile.invalid"_s,
			u"se ha suprimido el archivo jar de varias versiones {0} no válido"_s
		}),
		$$new($ObjectArray, {
			"error.validator.names.mismatch"_s,
			"la entrada {0} contiene una clase con un nombre interno {1}, los nombres no coinciden"_s
		}),
		$$new($ObjectArray, {
			"error.validator.new.public.class"_s,
			u"la entrada {0} contiene una nueva clase pública que no está en las entradas de base"_s
		}),
		$$new($ObjectArray, {
			"error.validator.version.notnumber"_s,
			u"el nombre de entrada {0} no tiene un número de versión"_s
		}),
		$$new($ObjectArray, {
			"error.write.file"_s,
			"Error al escribir un archivo jar existente"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any"_s,
			u" Modificadores de operación válidos en cualquier modo:\n\n  -C DIR                     Cambiar al directorio especificado e incluir el\n                             siguiente archivo"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any.file"_s,
			u"  -f, --file=FILE            El nombre del archivo. Si se omite, se usa stdin o\n                             stdout en función de la operación\n      --release VERSION      Se colocan todos los archivos siguientes en un directorio con versión\n                             del archivo jar (es decir, META-INF/versions/VERSION/)"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any.verbose"_s,
			u"  -v, --verbose              Generar salida verbose en salida estándar"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create"_s,
			u" Modificadores de operación válidos solo en el modo de creación:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.normalize"_s,
			u"  -n, --normalize            Normalizar información en el nuevo archivo jar\n                             después de la creación"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update"_s,
			u" Modificadores de operación válidos solo en el modo de creación y de actualización:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.do-not-resolve-by-default"_s,
			u"      --do-not-resolve-by-default  Excluir del conjunto de módulos raíz por defecto"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.hash-modules"_s,
			u"      --hash-modules=PATTERN Calcular y registrar los hash de módulos\n                             que coinciden con el patrón proporcionado y que dependen\n                             directa o indirectamente de la creación de un archivo jar modular\n                             o de la actualización de un archivo jar no modular"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.index"_s,
			u" Modificadores de operación válidos solo en el modo de creación, actualización y generación de índice:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.index.no-compress"_s,
			u"  -0, --no-compress          Solo almacenar; no usar compresión ZIP"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.main-class"_s,
			u"  -e, --main-class=CLASSNAME Punto de entrada de la aplicación para aplicaciones\n                             autónomas agrupadas en un archivo jar modular o\n                             ejecutable"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.manifest"_s,
			u"  -m, --manifest=FILE        Incluir la información de manifiesto del archivo\n                             de manifiesto proporcionado"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.module-path"_s,
			u"  -p, --module-path          Ubicación de la dependencia de módulo para generar\n                             el hash"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.module-version"_s,
			u"      --module-version=VERSION    Versión del módulo, si se va a crear un archivo jar modular\n                             o actualizar un archivo jar no modular"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.no-manifest"_s,
			u"  -M, --no-manifest          No crear ningún archivo de manifiesto para las entradas"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.warn-if-resolved"_s,
			u"      --warn-if-resolved     Indicación para que una herramienta emita una advertencia si el módulo\n                             se ha resuelto. En desuso, en desuso para eliminación\n                             o incubando"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main"_s,
			u" Modo de operación principal:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.create"_s,
			"  -c, --create               Crear el archivo"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.describe-module"_s,
			u"  -d, --describe-module      Imprimir el descriptor de módulo, o un nombre de módulo automático"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.extract"_s,
			"  -x, --extract              Extraer determinados (o todos) los archivos del archivo"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.generate-index"_s,
			u"  -i, --generate-index=FILE  Generar información de índice para los archivos jar\n                             especificados"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.list"_s,
			"  -t, --list                 Mostrar la tabla de contenido del archivo"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.update"_s,
			"  -u, --update               Actualizar un archivo jar existente"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other"_s,
			" Otras opciones:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.help"_s,
			"  -h, --help[:compat]        Utilice este valor, u opcionalmente la compatibilidad, ayuda"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.help-extra"_s,
			"      --help-extra           Prestar ayuda en las opciones adicionales"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.version"_s,
			u"      --version              Imprimir versión del programa"_s
		}),
		$$new($ObjectArray, {
			"main.help.postopt"_s,
			u" Un archivo es un jar modular si el descriptor de módulo, \'module-info.class\', está\n en la raíz de los directorios proporcionados o en la raíz del archivo jar.\n Las siguientes operaciones solo son válidas si se va a crear un archivo jar modular\n o se va a actualizar un jar existente no modular: \'--module-version\',\n \'--hash-modules\' y \'--module-path\'.\n\n Los argumentos obligatorios u opcionales en las opciones largas también son obligatorios u opcionales\n en cualquiera de las opciones cortas."_s
		}),
		$$new($ObjectArray, {
			"main.help.preopt"_s,
			u"Sintaxis: jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njar crea un archivo para las clases y recursos, y puede manipular o\nrestaurar clases individuales o recursos de un archivo.\n\n Ejemplos:\n # Crear un archivo denominado classes.jar con dos archivos de clase:\n jar --create --file classes.jar Foo.class Bar.class\n # Crear un archivo con un manifiesto existente, con todos los archivos en foo/:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # Crear un archivo jar modular, donde el descriptor de módulo está en\n # classes/module-info.class:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # Actualizar un jar no modular existente en un jar modular:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # Crear un archivo jar de varias versiones y colocar algunos archivos en el directorio META-INF/versions/9:\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 cla"
				"sses\n\nPara acortar o simplificar el comando jar, puede especificar argumentos en un archivo\nde texto separado y transmitirlos al comando jar con el símbolo de arroba (@) como prefijo.\n\n Ejemplos:\n # Leer opciones adicionales y mostrar los archivos de clases del archivo classes.list\n jar --create --file my.jar @classes.list\n"_s
		}),
		$$new($ObjectArray, {
			"main.usage.summary"_s,
			"Sintaxis: jar [OPTION...] [ [--release VERSION] [-C dir] archivos] ..."_s
		}),
		$$new($ObjectArray, {
			"main.usage.summary.try"_s,
			u"Intente `jar --help\' para obtener más información."_s
		}),
		$$new($ObjectArray, {
			"out.added.manifest"_s,
			"manifiesto agregado"_s
		}),
		$$new($ObjectArray, {
			"out.added.module-info"_s,
			"module-info agregado: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.adding"_s,
			"agregando: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.automodule"_s,
			u"No se ha encontrado ningún descriptor de módulo. Módulo automático derivado."_s
		}),
		$$new($ObjectArray, {
			"out.create"_s,
			"  creado: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.deflated"_s,
			"(desinflado {0}%)"_s
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
			"(entrada = {0}) (salida = {1})"_s
		}),
		$$new($ObjectArray, {
			"out.stored"_s,
			"(almacenado 0%)"_s
		}),
		$$new($ObjectArray, {
			"out.update.manifest"_s,
			"manifiesto actualizado"_s
		}),
		$$new($ObjectArray, {
			"out.update.module-info"_s,
			"module-info actualizado: {0}"_s
		}),
		$$new($ObjectArray, {
			"usage.compat"_s,
			u"Interfaz de compatibilidad:\nSintaxis: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files] ...Opciones: \n    -c  crear nuevo archivo\n    -t  mostrar la tabla de contenido del archivo\n    -x   extraer el archivo mencionado (o todos) del archivo\n    -u  actualizar archivo existente\n    -v  generar salida detallada de los datos de salida estándar\n    -f  especificar nombre del archivo de almacenamiento\n    -m  incluir información de manifiesto del archivo de manifiesto especificado n    -n  realizar la normalización Pack200 después de crear un archivo nuevo\n    -e  especificar punto de entrada de la aplicación para la aplicación autónoma \n        que se incluye dentro de un archivo jar ejecutable\n    -0  solo almacenar; no utilizar compresión ZIP\n    -P  conservar componentes iniciales \'/\' (ruta absoluta) y \"..\" (directorio principal) en los nombres de archivo\n    -M  no crear un archivo de manifiesto para las entradas\n    -i  generar información de índice para los archivos jar especifi"
				"cados\n    -C  cambiar al directorio especificado e incluir el archivo siguiente\nSi algún archivo es un directorio, se procesará de forma recurrente. \nEl nombre del archivo de manifiesto, el nombre del archivo de almacenamiento y el nombre del punto de entrada se\n especifican en el mismo orden que los indicadores \'m\', \'f\' y \'e\'. \n\nEjemplo 1: para archivar archivos de dos clases en un archivo llamado classes.jar: \n       jar cvf classes.jar Foo.class Bar.class \nEjemplo 2: utilice un archivo de manifiesto existente \'mymanifest\' y archive todos los\n           archivos del directorio foo/ en \'classes.jar\': \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s
		}),
		$$new($ObjectArray, {
			"warn.release.unexpected.versioned.entry"_s,
			"entrada versionada inesperada {0}"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.concealed.public.class"_s,
			u"Advertencia: la entrada {0} es una clase pública\nen un paquete oculto. Colocar este archivo jar en la ruta de clase tendrá como resultado\ninterfaces públicas no compatibles"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.identical.entry"_s,
			u"Advertencia: la entrada {0} contiene una clase idéntica a una entrada que ya está en el archivo jar"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.resources.with.same.name"_s,
			"Advertencia: la entrada {0} tiene varios recursos con el mismo nombre"_s
		})
	});
}

jar_es::jar_es() {
}

$Class* jar_es::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(jar_es, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(jar_es, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.tools.jar.resources.jar_es",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(jar_es, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(jar_es);
	});
	return class$;
}

$Class* jar_es::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun