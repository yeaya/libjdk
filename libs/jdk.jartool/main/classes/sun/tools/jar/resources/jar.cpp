#include <sun/tools/jar/resources/jar.h>

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

$MethodInfo _jar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(jar, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(jar, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _jar_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.jar.resources.jar",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_jar_MethodInfo_
};

$Object* allocate$jar($Class* clazz) {
	return $of($alloc(jar));
}

void jar::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("error.bad.cflag"_s),
			$of("\'c\' flag requires manifest or input files to be specified!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.dflag"_s),
			$of("\'-d, --describe-module\' option requires no input file(s) to be specified"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.eflag"_s),
			$of("\'e\' flag and manifest with the \'Main-Class\' attribute cannot be specified \ntogether!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.file.arg"_s),
			$of("Error parsing file arguments"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.option"_s),
			$of("One of options -{ctxuid} or --validate must be specified."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.reason"_s),
			$of("bad reason: {0}, must be one of deprecated, deprecated-for-removal, or incubating"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.uflag"_s),
			$of("\'u\' flag requires manifest, \'e\' flag or input files to be specified!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.cant.open"_s),
			$of("can\'\'t open: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of("{0} : could not create directory"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of("Could not create a temporary file"_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of("Hashing module {0} dependences, unable to find module {1} on module path"_s)
		}),
		$$new($ObjectArray, {
			$of("error.illegal.option"_s),
			$of("Illegal option: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.incorrect.length"_s),
			$of("incorrect length while processing: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.invalid.versioned.module.attribute"_s),
			$of("Invalid module descriptor attribute {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.arg"_s),
			$of("option {0} requires an argument"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.provider"_s),
			$of("Service provider not found: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.descriptor.not.found"_s),
			$of("Module descriptor not found"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.options.without.info"_s),
			$of("One of --module-version or --hash-modules without module-info.class"_s)
		}),
		$$new($ObjectArray, {
			$of("error.multiple.main.operations"_s),
			$of("You may not specify more than one \'-cuxtid\' options"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.operative.descriptor"_s),
			$of("No operative descriptor for release: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of("No root module descriptor, specify --release"_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of("{0} : no such file or directory"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of("unexpected versioned entry {0} for release {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of("release {0} not valid"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of("release {0} not valid, must be >= 9"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of("Unable to derive module descriptor for: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unexpected.module-info"_s),
			$of("Unexpected module descriptor {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unrecognized.option"_s),
			$of("unrecognized option : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.bad.entry.name"_s),
			$of("entry name malformed, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of("entry: {0}, contains a class with different api from earlier version"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of("entry name: {0}, too short, not a directory"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of("entry: {0}, has a class version incompatible with an earlier version"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of("module-info.class in a versioned directory contains different \"exports\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of("{0}: module-info.class in a versioned directory contains different \"main-class\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of("module-info.class in a versioned directory contains incorrect name"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of("module-info.class in a versioned directory contains different \"opens\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of("module-info.class in a versioned directory contains different \"provides\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of("module-info.class in a versioned directory contains additional \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of("module-info.class in a versioned directory contains missing \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of("module-info.class in a versioned directory contains additional \"requires transitive\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of("{0}: module-info.class in a versioned directory contains different \"version\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of("entry: {0}, is an isolated nested class"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of("can not validate {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of("invalid multi-release jar file {0} deleted"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of("entry: {0}, contains a class with internal name {1}, names do not match"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of("entry: {0}, contains a new public class not found in base entries"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of("entry name: {0}, does not have a version number"_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of("Error in writing existing jar file"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(" Operation modifiers valid in any mode:\n\n  -C DIR                     Change to the specified directory and include the\n                             following file"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of("  -f, --file=FILE            The archive file name. When omitted, either stdin or\n                             stdout is used based on the operation\n      --release VERSION      Places all following files in a versioned directory\n                             of the jar (i.e. META-INF/versions/VERSION/)"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of("  -v, --verbose              Generate verbose output on standard output"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(" Operation modifiers valid only in create mode:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of("  -n, --normalize            Normalize information in the new jar archive\n                             after creation. This option is deprecated, and is\n                             planned for removal in a future JDK release"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(" Operation modifiers valid only in create and update mode:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of("      --do-not-resolve-by-default  Exclude from the default root set of modules"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of("      --hash-modules=PATTERN Compute and record the hashes of modules \n                             matched by the given pattern and that depend upon\n                             directly or indirectly on a modular jar being\n                             created or a non-modular jar being updated"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(" Operation modifiers valid only in create, update, and generate-index mode:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of("  -0, --no-compress          Store only; use no ZIP compression"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of("  -e, --main-class=CLASSNAME The application entry point for stand-alone\n                             applications bundled into a modular, or executable,\n                             jar archive"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of("  -m, --manifest=FILE        Include the manifest information from the given\n                             manifest file"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of("  -p, --module-path          Location of module dependence for generating\n                             the hash"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of("      --module-version=VERSION    The module version, when creating a modular\n                             jar, or updating a non-modular jar"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of("  -M, --no-manifest          Do not create a manifest file for the entries"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of("      --warn-if-resolved     Hint for a tool to issue a warning if the module\n                             is resolved. One of deprecated, deprecated-for-removal,\n                             or incubating"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(" Main operation mode:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.create"_s),
			$of("  -c, --create               Create the archive"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.describe-module"_s),
			$of("  -d, --describe-module      Print the module descriptor, or automatic module name"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.extract"_s),
			$of("  -x, --extract              Extract named (or all) files from the archive"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of("  -i, --generate-index=FILE  Generate index information for the specified jar\n                             archives"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of("  -t, --list                 List the table of contents for the archive"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of("  -u, --update               Update an existing jar archive"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.validate"_s),
			$of("      --validate             Validate the contents of the jar archive. This option\n                             will validate that the API exported by a multi-release\n                             jar archive is consistent across all different release\n                             versions."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(" Other options:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of("  -?, -h, --help[:compat]    Give this, or optionally the compatibility, help"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of("      --help-extra           Give help on extra options"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of("      --version              Print program version"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(" An archive is a modular jar if a module descriptor, \'module-info.class\', is\n located in the root of the given directories, or the root of the jar archive\n itself. The following operations are only valid when creating a modular jar,\n or updating an existing non-modular jar: \'--module-version\',\n \'--hash-modules\', and \'--module-path\'.\n\n Mandatory or optional arguments to long options are also mandatory or optional\n for any corresponding short options."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of("Usage: jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njar creates an archive for classes and resources, and can manipulate or\nrestore individual classes or resources from an archive.\n\n Examples:\n # Create an archive called classes.jar with two class files:\n jar --create --file classes.jar Foo.class Bar.class\n # Create an archive using an existing manifest, with all the files in foo/:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # Create a modular jar archive, where the module descriptor is located in\n # classes/module-info.class:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # Update an existing non-modular jar to a modular jar:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # Create a multi-release jar, placing some files in the META-INF/versions/9 directory:\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\nTo shorten or simplify the"
				" jar command, you can specify arguments in a separate\ntext file and pass it to the jar command with the at sign (@) as a prefix.\n\n Examples:\n # Read additional options and list of class files from the file classes.list\n jar --create --file my.jar @classes.list\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary"_s),
			$of("Usage: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary.try"_s),
			$of("Try `jar --help\' for more information."_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.manifest"_s),
			$of("added manifest"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.module-info"_s),
			$of("added module-info: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.adding"_s),
			$of("adding: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.automodule"_s),
			$of("No module descriptor found. Derived automatic module."_s)
		}),
		$$new($ObjectArray, {
			$of("out.create"_s),
			$of("  created: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.deflated"_s),
			$of("(deflated {0}%)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.extracted"_s),
			$of("extracted: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.ignore.entry"_s),
			$of("ignoring entry {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.inflated"_s),
			$of(" inflated: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.size"_s),
			$of("(in = {0}) (out= {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("out.stored"_s),
			$of("(stored 0%)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.manifest"_s),
			$of("updated manifest"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.module-info"_s),
			$of("updated module-info: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("usage.compat"_s),
			$of("Compatibility Interface:\nUsage: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files] ...\nOptions:\n    -c  create new archive\n    -t  list table of contents for archive\n    -x  extract named (or all) files from archive\n    -u  update existing archive\n    -v  generate verbose output on standard output\n    -f  specify archive file name\n    -m  include manifest information from specified manifest file\n    -e  specify application entry point for stand-alone application \n        bundled into an executable jar file\n    -0  store only; use no ZIP compression\n    -P  preserve leading \'/\' (absolute path) and \"..\" (parent directory) components from file names\n    -M  do not create a manifest file for the entries\n    -i  generate index information for the specified jar files\n    -C  change to the specified directory and include the following file\nIf any file is a directory then it is processed recursively.\nThe manifest file name, the archive file name and the entry point name are\nspecified in th"
				"e same order as the \'m\', \'f\' and \'e\' flags.\n\nExample 1: to archive two class files into an archive called classes.jar: \n       jar cvf classes.jar Foo.class Bar.class \nExample 2: use an existing manifest file \'mymanifest\' and archive all the\n           files in the foo/ directory into \'classes.jar\': \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.flag.is.deprecated"_s),
			$of("Warning: The {0} option is deprecated, and is planned for removal in a future JDK release\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of("unexpected versioned entry {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of("Warning: entry {0} is a public class\nin a concealed package, placing this jar on the class path will result\nin incompatible public interfaces"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of("Warning: entry {0} contains a class that\nis identical to an entry already in the jar"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.resources.with.same.name"_s),
			$of("Warning: entry {0}, multiple resources with same name"_s)
		})
	});
}

jar::jar() {
}

$Class* jar::load$($String* name, bool initialize) {
	$loadClass(jar, name, initialize, &_jar_ClassInfo_, allocate$jar);
	return class$;
}

$Class* jar::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun