#include <com/sun/tools/javac/resources/javac.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

void javac::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* javac::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"javac.fullVersion"_s,
			"{0} full version \"{1}\""_s
		}),
		$$new($ObjectArray, {
			"javac.msg.bug"_s,
			"An exception has occurred in the compiler ({0}). Please file a bug against the Java compiler via the Java bug reporting page (http://bugreport.java.com) after checking the Bug Database (http://bugs.java.com) for duplicates. Include your program, the following diagnostic, and the parameters passed to the Java compiler in your report. Thank you."_s
		}),
		$$new($ObjectArray, {
			"javac.msg.io"_s,
			"\n\nAn input/output error occurred.\nConsult the following stack trace for details.\n"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.parameters.output"_s,
			"printing javac parameters to: {0}"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.parameters.output.error"_s,
			"error while trying to print javac parameters to: {0}, parameters will follow:"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.plugin.uncaught.exception"_s,
			"\n\nA plugin threw an uncaught exception.\nConsult the following stack trace for details.\n"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.proc.annotation.uncaught.exception"_s,
			"\n\nAn annotation processor threw an uncaught exception.\nConsult the following stack trace for details.\n"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.resource"_s,
			"\n\nThe system is out of resources.\nConsult the following stack trace for details.\n"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.usage"_s,
			"Usage: {0} <options> <source files>\nuse --help for a list of possible options"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.usage.header"_s,
			"Usage: {0} <options> <source files>\nwhere possible options include:"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.usage.nonstandard.footer"_s,
			"These extra options are subject to change without notice."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.A"_s,
			"Options to pass to annotation processors"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.AT"_s,
			"Read options and filenames from file"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.J"_s,
			"Pass <flag> directly to the runtime system"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Werror"_s,
			"Terminate compilation if warnings occur"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.X"_s,
			"Print help on extra options"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xbootclasspath.a"_s,
			"Append to the bootstrap class path"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xbootclasspath.p"_s,
			"Prepend to the bootstrap class path"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xdoclint"_s,
			"Enable recommended checks for problems in javadoc comments"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xdoclint.custom"_s,
			"Enable or disable specific checks for problems in javadoc comments,\nwhere <group> is one of accessibility, html, missing, reference, or syntax,\nand <access> is one of public, protected, package, or private."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xdoclint.package.args"_s,
			"[-]<packages>(,[-]<package>)*"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xdoclint.package.desc"_s,
			"Enable or disable checks in specific packages. Each <package> is either the\nqualified name of a package or a package name prefix followed by \'.*\', which\nexpands to all sub-packages of the given package. Each <package> can be prefixed\nwith \'-\' to disable checks for the specified package or packages."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xdoclint.subopts"_s,
			"(all|none|[-]<group>)[/<access>]"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint"_s,
			"Enable recommended warnings"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.all"_s,
			"Enable all warnings"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.custom"_s,
			"Warnings to enable or disable, separated by comma.\nPrecede a key by \'-\' to disable the specified warning.\nUse --help-lint to see the supported keys."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.auxiliaryclass"_s,
			"Warn about an auxiliary class that is hidden in a source file, and is used from other files."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.cast"_s,
			"Warn about use of unnecessary casts."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.classfile"_s,
			"Warn about issues related to classfile contents."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.dep-ann"_s,
			"Warn about items marked as deprecated in JavaDoc but not using the @Deprecated annotation."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.deprecation"_s,
			"Warn about use of deprecated items."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.divzero"_s,
			"Warn about division by constant integer 0."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.empty"_s,
			"Warn about empty statement after if."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.exports"_s,
			"Warn about issues regarding module exports."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.fallthrough"_s,
			"Warn about falling through from one case of a switch statement to the next."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.finally"_s,
			"Warn about finally clauses that do not terminate normally."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.missing-explicit-ctor"_s,
			"Warn about missing explicit constructors in public and protected classes in exported packages."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.module"_s,
			"Warn about module system related issues."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.opens"_s,
			"Warn about issues regarding module opens."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.options"_s,
			"Warn about issues relating to use of command line options."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.overloads"_s,
			"Warn about issues regarding method overloads."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.overrides"_s,
			"Warn about issues regarding method overrides."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.path"_s,
			"Warn about invalid path elements on the command line."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.preview"_s,
			"Warn about use of preview language features."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.processing"_s,
			"Warn about issues regarding annotation processing."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.rawtypes"_s,
			"Warn about use of raw types."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.removal"_s,
			"Warn about use of API that has been marked for removal."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.requires-automatic"_s,
			"Warn about use of automatic modules in the requires clauses."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.requires-transitive-automatic"_s,
			"Warn about automatic modules in requires transitive."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.serial"_s,
			"Warn about Serializable classes that do not provide a serial version ID. \n                         Also warn about access to non-public members from a serializable element."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.static"_s,
			"Warn about accessing a static member using an instance."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.strictfp"_s,
			"Warn about unnecessary use of the strictfp modifier."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.synchronization"_s,
			"Warn about synchronization attempts on instances of value-based classes."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.text-blocks"_s,
			"Warn about inconsistent white space characters in text block indentation."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.try"_s,
			"Warn about issues relating to use of try blocks (i.e. try-with-resources)."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.unchecked"_s,
			"Warn about unchecked operations."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.varargs"_s,
			"Warn about potentially unsafe vararg methods."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.none"_s,
			"Disable all warnings"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xstdout"_s,
			"Redirect standard output"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.addExports"_s,
			"Specify a package to be considered as exported from its defining module\nto additional modules, or to all unnamed modules if <other-module> is ALL-UNNAMED."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.addReads"_s,
			"Specify additional modules to be considered as required by a given module.\n<other-module> may be ALL-UNNAMED to require the unnamed module."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.addmods"_s,
			"Root modules to resolve in addition to the initial modules, or all modules\non the module path if <module> is ALL-MODULE-PATH."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.Xlint"_s,
			"<key>(,<key>)*"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.addExports"_s,
			"<module>/<package>=<other-module>(,<other-module>)*"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.addReads"_s,
			"<module>=<other-module>(,<other-module>)*"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.addmods"_s,
			"<module>(,<module>)*"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.class"_s,
			"<class>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.class.list"_s,
			"<class1>[,<class2>,<class3>...]"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.default.module.for.created.files"_s,
			"<module-name>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.directory"_s,
			"<directory>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.dirs"_s,
			"<dirs>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.encoding"_s,
			"<encoding>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.file"_s,
			"<filename>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.flag"_s,
			"<flag>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.jdk"_s,
			"<jdk>|none"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.key.equals.value"_s,
			"key[=value]"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.limitmods"_s,
			"<module>(,<module>)*"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.m"_s,
			"<module>(,<module>)*"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.module.version"_s,
			"<version>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.mspath"_s,
			"<module-source-path>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.multi-release"_s,
			"<release>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.number"_s,
			"<number>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.patch"_s,
			"<module>=<file>(:<file>)*"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.path"_s,
			"<path>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.pathname"_s,
			"<pathname>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.plugin"_s,
			"\"name args\""_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.profile"_s,
			"<profile>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.release"_s,
			"<release>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.bootclasspath"_s,
			"Override location of bootstrap class files"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.classpath"_s,
			"Specify where to find user class files and annotation processors"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.d"_s,
			"Specify where to place generated class files"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.default.module.for.created.files"_s,
			"Fallback target module for files created by annotation processors, if none specified or inferred."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.deprecation"_s,
			"Output source locations where deprecated APIs are used"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.diags"_s,
			"Select a diagnostic mode"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.encoding"_s,
			"Specify character encoding used by source files"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.endorseddirs"_s,
			"Override location of endorsed standards path"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.extdirs"_s,
			"Override location of installed extensions"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.g"_s,
			"Generate all debugging info"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.g.lines.vars.source"_s,
			"Generate only some debugging info"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.g.none"_s,
			"Generate no debugging info"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.headerDest"_s,
			"Specify where to place generated native header files"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.help"_s,
			"Print this help message"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.help.lint"_s,
			"Print the supported keys for -Xlint"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.help.lint.header"_s,
			"The supported keys for -Xlint are:"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.implicit"_s,
			"Specify whether or not to generate class files for implicitly referenced files"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.inherit_runtime_environment"_s,
			"Inherit module system configuration options from the runtime environment."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.limitmods"_s,
			"Limit the universe of observable modules"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.m"_s,
			"Compile only the specified module(s), check timestamps"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.maxerrs"_s,
			"Set the maximum number of errors to print"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.maxwarns"_s,
			"Set the maximum number of warnings to print"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.module.version"_s,
			"Specify version of modules that are being compiled"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.modulepath"_s,
			"Specify where to find application modules"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.modulesourcepath"_s,
			"Specify where to find input source files for multiple modules"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.moreinfo"_s,
			"Print extended information for type variables"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.multi-release"_s,
			"Specify which release to use in multi-release jars"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.nogj"_s,
			"Don\'t accept generics in the language"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.nowarn"_s,
			"Generate no warnings"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.parameters"_s,
			"Generate metadata for reflection on method parameters"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.patch"_s,
			"Override or augment a module with classes and resources\nin JAR files or directories"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.pkginfo"_s,
			"Specify handling of package-info files"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.plugin"_s,
			"Name and optional arguments for a plug-in to be run"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.prefer"_s,
			"Specify which file to read when both a source file and class file are found for an implicitly compiled class"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.preview"_s,
			"Enable preview language features. To be used in conjunction with either -source or --release."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.print"_s,
			"Print out a textual representation of specified types"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.printProcessorInfo"_s,
			"Print information about which annotations a processor is asked to process"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.printRounds"_s,
			"Print information about rounds of annotation processing"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.printsearch"_s,
			"Print information where classfiles are searched"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.proc.none.only"_s,
			"Control whether annotation processing and/or compilation is done."_s
		}),
		$$new($ObjectArray, {
			"javac.opt.processor"_s,
			"Names of the annotation processors to run; bypasses default discovery process"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.processormodulepath"_s,
			"Specify a module path where to find annotation processors"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.processorpath"_s,
			"Specify where to find annotation processors"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.profile"_s,
			"Check that API used is available in the specified profile"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.prompt"_s,
			"Stop after each error"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.release"_s,
			"Compile for the specified Java SE release. Supported releases: {0}"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.s"_s,
			"Emit java sources instead of classfiles"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.source"_s,
			"Provide source compatibility with the specified Java SE release. Supported releases: {0}"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.sourceDest"_s,
			"Specify where to place generated source files"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.sourcepath"_s,
			"Specify where to find input source files"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.system"_s,
			"Override location of system modules"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.target"_s,
			"Generate class files suitable for the specified Java SE release. Supported releases: {0}"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.upgrademodulepath"_s,
			"Override location of upgradeable modules"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.userpathsfirst"_s,
			"Search classpath and sourcepath for classes before the bootclasspath instead of after"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.verbose"_s,
			"Output messages about what the compiler is doing"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.version"_s,
			"Version information"_s
		}),
		$$new($ObjectArray, {
			"javac.version"_s,
			"{0} {1}"_s
		})
	});
}

javac::javac() {
}

$Class* javac::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(javac, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(javac, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.tools.javac.resources.javac",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(javac, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(javac);
	});
	return class$;
}

$Class* javac::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com