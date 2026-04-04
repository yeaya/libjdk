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

void jar::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"error.bad.cflag"_s,
			"\'c\' flag requires manifest or input files to be specified!"_s
		}),
		$$new($ObjectArray, {
			"error.bad.dflag"_s,
			"\'-d, --describe-module\' option requires no input file(s) to be specified"_s
		}),
		$$new($ObjectArray, {
			"error.bad.eflag"_s,
			"\'e\' flag and manifest with the \'Main-Class\' attribute cannot be specified \ntogether!"_s
		}),
		$$new($ObjectArray, {
			"error.bad.file.arg"_s,
			"Error parsing file arguments"_s
		}),
		$$new($ObjectArray, {
			"error.bad.option"_s,
			"One of options -{ctxuid} or --validate must be specified."_s
		}),
		$$new($ObjectArray, {
			"error.bad.reason"_s,
			"bad reason: {0}, must be one of deprecated, deprecated-for-removal, or incubating"_s
		}),
		$$new($ObjectArray, {
			"error.bad.uflag"_s,
			"\'u\' flag requires manifest, \'e\' flag or input files to be specified!"_s
		}),
		$$new($ObjectArray, {
			"error.cant.open"_s,
			"can\'\'t open: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.create.dir"_s,
			"{0} : could not create directory"_s
		}),
		$$new($ObjectArray, {
			"error.create.tempfile"_s,
			"Could not create a temporary file"_s
		}),
		$$new($ObjectArray, {
			"error.hash.dep"_s,
			"Hashing module {0} dependences, unable to find module {1} on module path"_s
		}),
		$$new($ObjectArray, {
			"error.illegal.option"_s,
			"Illegal option: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.incorrect.length"_s,
			"incorrect length while processing: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.invalid.versioned.module.attribute"_s,
			"Invalid module descriptor attribute {0}"_s
		}),
		$$new($ObjectArray, {
			"error.missing.arg"_s,
			"option {0} requires an argument"_s
		}),
		$$new($ObjectArray, {
			"error.missing.provider"_s,
			"Service provider not found: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.module.descriptor.not.found"_s,
			"Module descriptor not found"_s
		}),
		$$new($ObjectArray, {
			"error.module.options.without.info"_s,
			"One of --module-version or --hash-modules without module-info.class"_s
		}),
		$$new($ObjectArray, {
			"error.multiple.main.operations"_s,
			"You may not specify more than one \'-cuxtid\' options"_s
		}),
		$$new($ObjectArray, {
			"error.no.operative.descriptor"_s,
			"No operative descriptor for release: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.no.root.descriptor"_s,
			"No root module descriptor, specify --release"_s
		}),
		$$new($ObjectArray, {
			"error.nosuch.fileordir"_s,
			"{0} : no such file or directory"_s
		}),
		$$new($ObjectArray, {
			"error.release.unexpected.versioned.entry"_s,
			"unexpected versioned entry {0} for release {1}"_s
		}),
		$$new($ObjectArray, {
			"error.release.value.notnumber"_s,
			"release {0} not valid"_s
		}),
		$$new($ObjectArray, {
			"error.release.value.toosmall"_s,
			"release {0} not valid, must be >= 9"_s
		}),
		$$new($ObjectArray, {
			"error.unable.derive.automodule"_s,
			"Unable to derive module descriptor for: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.unexpected.module-info"_s,
			"Unexpected module descriptor {0}"_s
		}),
		$$new($ObjectArray, {
			"error.unrecognized.option"_s,
			"unrecognized option : {0}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.bad.entry.name"_s,
			"entry name malformed, {0}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.different.api"_s,
			"entry: {0}, contains a class with different api from earlier version"_s
		}),
		$$new($ObjectArray, {
			"error.validator.entryname.tooshort"_s,
			"entry name: {0}, too short, not a directory"_s
		}),
		$$new($ObjectArray, {
			"error.validator.incompatible.class.version"_s,
			"entry: {0}, has a class version incompatible with an earlier version"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.exports.notequal"_s,
			"module-info.class in a versioned directory contains different \"exports\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.manclass.notequal"_s,
			"{0}: module-info.class in a versioned directory contains different \"main-class\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.name.notequal"_s,
			"module-info.class in a versioned directory contains incorrect name"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.opens.notequal"_s,
			"module-info.class in a versioned directory contains different \"opens\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.provides.notequal"_s,
			"module-info.class in a versioned directory contains different \"provides\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.added"_s,
			"module-info.class in a versioned directory contains additional \"requires\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.dropped"_s,
			"module-info.class in a versioned directory contains missing \"requires\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.transitive"_s,
			"module-info.class in a versioned directory contains additional \"requires transitive\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.version.notequal"_s,
			"{0}: module-info.class in a versioned directory contains different \"version\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.isolated.nested.class"_s,
			"entry: {0}, is an isolated nested class"_s
		}),
		$$new($ObjectArray, {
			"error.validator.jarfile.exception"_s,
			"can not validate {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.jarfile.invalid"_s,
			"invalid multi-release jar file {0} deleted"_s
		}),
		$$new($ObjectArray, {
			"error.validator.names.mismatch"_s,
			"entry: {0}, contains a class with internal name {1}, names do not match"_s
		}),
		$$new($ObjectArray, {
			"error.validator.new.public.class"_s,
			"entry: {0}, contains a new public class not found in base entries"_s
		}),
		$$new($ObjectArray, {
			"error.validator.version.notnumber"_s,
			"entry name: {0}, does not have a version number"_s
		}),
		$$new($ObjectArray, {
			"error.write.file"_s,
			"Error in writing existing jar file"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any"_s,
			" Operation modifiers valid in any mode:\n\n  -C DIR                     Change to the specified directory and include the\n                             following file"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any.file"_s,
			"  -f, --file=FILE            The archive file name. When omitted, either stdin or\n                             stdout is used based on the operation\n      --release VERSION      Places all following files in a versioned directory\n                             of the jar (i.e. META-INF/versions/VERSION/)"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any.verbose"_s,
			"  -v, --verbose              Generate verbose output on standard output"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create"_s,
			" Operation modifiers valid only in create mode:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.normalize"_s,
			"  -n, --normalize            Normalize information in the new jar archive\n                             after creation. This option is deprecated, and is\n                             planned for removal in a future JDK release"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update"_s,
			" Operation modifiers valid only in create and update mode:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.do-not-resolve-by-default"_s,
			"      --do-not-resolve-by-default  Exclude from the default root set of modules"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.hash-modules"_s,
			"      --hash-modules=PATTERN Compute and record the hashes of modules \n                             matched by the given pattern and that depend upon\n                             directly or indirectly on a modular jar being\n                             created or a non-modular jar being updated"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.index"_s,
			" Operation modifiers valid only in create, update, and generate-index mode:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.index.no-compress"_s,
			"  -0, --no-compress          Store only; use no ZIP compression"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.main-class"_s,
			"  -e, --main-class=CLASSNAME The application entry point for stand-alone\n                             applications bundled into a modular, or executable,\n                             jar archive"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.manifest"_s,
			"  -m, --manifest=FILE        Include the manifest information from the given\n                             manifest file"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.module-path"_s,
			"  -p, --module-path          Location of module dependence for generating\n                             the hash"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.module-version"_s,
			"      --module-version=VERSION    The module version, when creating a modular\n                             jar, or updating a non-modular jar"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.no-manifest"_s,
			"  -M, --no-manifest          Do not create a manifest file for the entries"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.warn-if-resolved"_s,
			"      --warn-if-resolved     Hint for a tool to issue a warning if the module\n                             is resolved. One of deprecated, deprecated-for-removal,\n                             or incubating"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main"_s,
			" Main operation mode:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.create"_s,
			"  -c, --create               Create the archive"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.describe-module"_s,
			"  -d, --describe-module      Print the module descriptor, or automatic module name"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.extract"_s,
			"  -x, --extract              Extract named (or all) files from the archive"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.generate-index"_s,
			"  -i, --generate-index=FILE  Generate index information for the specified jar\n                             archives"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.list"_s,
			"  -t, --list                 List the table of contents for the archive"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.update"_s,
			"  -u, --update               Update an existing jar archive"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.validate"_s,
			"      --validate             Validate the contents of the jar archive. This option\n                             will validate that the API exported by a multi-release\n                             jar archive is consistent across all different release\n                             versions."_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other"_s,
			" Other options:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.help"_s,
			"  -?, -h, --help[:compat]    Give this, or optionally the compatibility, help"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.help-extra"_s,
			"      --help-extra           Give help on extra options"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.version"_s,
			"      --version              Print program version"_s
		}),
		$$new($ObjectArray, {
			"main.help.postopt"_s,
			" An archive is a modular jar if a module descriptor, \'module-info.class\', is\n located in the root of the given directories, or the root of the jar archive\n itself. The following operations are only valid when creating a modular jar,\n or updating an existing non-modular jar: \'--module-version\',\n \'--hash-modules\', and \'--module-path\'.\n\n Mandatory or optional arguments to long options are also mandatory or optional\n for any corresponding short options."_s
		}),
		$$new($ObjectArray, {
			"main.help.preopt"_s,
			"Usage: jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njar creates an archive for classes and resources, and can manipulate or\nrestore individual classes or resources from an archive.\n\n Examples:\n # Create an archive called classes.jar with two class files:\n jar --create --file classes.jar Foo.class Bar.class\n # Create an archive using an existing manifest, with all the files in foo/:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # Create a modular jar archive, where the module descriptor is located in\n # classes/module-info.class:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # Update an existing non-modular jar to a modular jar:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # Create a multi-release jar, placing some files in the META-INF/versions/9 directory:\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\nTo shorten or simplify the"
				" jar command, you can specify arguments in a separate\ntext file and pass it to the jar command with the at sign (@) as a prefix.\n\n Examples:\n # Read additional options and list of class files from the file classes.list\n jar --create --file my.jar @classes.list\n"_s
		}),
		$$new($ObjectArray, {
			"main.usage.summary"_s,
			"Usage: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s
		}),
		$$new($ObjectArray, {
			"main.usage.summary.try"_s,
			"Try `jar --help\' for more information."_s
		}),
		$$new($ObjectArray, {
			"out.added.manifest"_s,
			"added manifest"_s
		}),
		$$new($ObjectArray, {
			"out.added.module-info"_s,
			"added module-info: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.adding"_s,
			"adding: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.automodule"_s,
			"No module descriptor found. Derived automatic module."_s
		}),
		$$new($ObjectArray, {
			"out.create"_s,
			"  created: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.deflated"_s,
			"(deflated {0}%)"_s
		}),
		$$new($ObjectArray, {
			"out.extracted"_s,
			"extracted: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.ignore.entry"_s,
			"ignoring entry {0}"_s
		}),
		$$new($ObjectArray, {
			"out.inflated"_s,
			" inflated: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.size"_s,
			"(in = {0}) (out= {1})"_s
		}),
		$$new($ObjectArray, {
			"out.stored"_s,
			"(stored 0%)"_s
		}),
		$$new($ObjectArray, {
			"out.update.manifest"_s,
			"updated manifest"_s
		}),
		$$new($ObjectArray, {
			"out.update.module-info"_s,
			"updated module-info: {0}"_s
		}),
		$$new($ObjectArray, {
			"usage.compat"_s,
			"Compatibility Interface:\nUsage: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files] ...\nOptions:\n    -c  create new archive\n    -t  list table of contents for archive\n    -x  extract named (or all) files from archive\n    -u  update existing archive\n    -v  generate verbose output on standard output\n    -f  specify archive file name\n    -m  include manifest information from specified manifest file\n    -e  specify application entry point for stand-alone application \n        bundled into an executable jar file\n    -0  store only; use no ZIP compression\n    -P  preserve leading \'/\' (absolute path) and \"..\" (parent directory) components from file names\n    -M  do not create a manifest file for the entries\n    -i  generate index information for the specified jar files\n    -C  change to the specified directory and include the following file\nIf any file is a directory then it is processed recursively.\nThe manifest file name, the archive file name and the entry point name are\nspecified in th"
				"e same order as the \'m\', \'f\' and \'e\' flags.\n\nExample 1: to archive two class files into an archive called classes.jar: \n       jar cvf classes.jar Foo.class Bar.class \nExample 2: use an existing manifest file \'mymanifest\' and archive all the\n           files in the foo/ directory into \'classes.jar\': \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s
		}),
		$$new($ObjectArray, {
			"warn.flag.is.deprecated"_s,
			"Warning: The {0} option is deprecated, and is planned for removal in a future JDK release\n"_s
		}),
		$$new($ObjectArray, {
			"warn.release.unexpected.versioned.entry"_s,
			"unexpected versioned entry {0}"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.concealed.public.class"_s,
			"Warning: entry {0} is a public class\nin a concealed package, placing this jar on the class path will result\nin incompatible public interfaces"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.identical.entry"_s,
			"Warning: entry {0} contains a class that\nis identical to an entry already in the jar"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.resources.with.same.name"_s,
			"Warning: entry {0}, multiple resources with same name"_s
		})
	});
}

jar::jar() {
}

$Class* jar::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(jar, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(jar, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.tools.jar.resources.jar",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(jar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(jar);
	});
	return class$;
}

$Class* jar::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun