#include <com/sun/tools/javac/resources/LauncherProperties$Errors.h>
#include <com/sun/tools/javac/resources/LauncherProperties.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

$JCDiagnostic$Error* LauncherProperties$Errors::CompilationFailed = nullptr;
$JCDiagnostic$Error* LauncherProperties$Errors::EnablePreviewRequiresSource = nullptr;
$JCDiagnostic$Error* LauncherProperties$Errors::MainNotPublicStatic = nullptr;
$JCDiagnostic$Error* LauncherProperties$Errors::MainNotVoid = nullptr;
$JCDiagnostic$Error* LauncherProperties$Errors::NoArgs = nullptr;
$JCDiagnostic$Error* LauncherProperties$Errors::NoClass = nullptr;

void LauncherProperties$Errors::init$() {
}

$JCDiagnostic$Error* LauncherProperties$Errors::CantAccessMainMethod($String* arg0) {
	$init(LauncherProperties$Errors);
	return $new($JCDiagnostic$Error, "launcher"_s, "cant.access.main.method"_s, $$new($ObjectArray, {arg0}));
}

$JCDiagnostic$Error* LauncherProperties$Errors::CantFindClass($String* arg0) {
	$init(LauncherProperties$Errors);
	return $new($JCDiagnostic$Error, "launcher"_s, "cant.find.class"_s, $$new($ObjectArray, {arg0}));
}

$JCDiagnostic$Error* LauncherProperties$Errors::CantFindMainMethod($String* arg0) {
	$init(LauncherProperties$Errors);
	return $new($JCDiagnostic$Error, "launcher"_s, "cant.find.main.method"_s, $$new($ObjectArray, {arg0}));
}

$JCDiagnostic$Error* LauncherProperties$Errors::CantReadFile($Path* arg0, Object$* arg1) {
	$init(LauncherProperties$Errors);
	return $new($JCDiagnostic$Error, "launcher"_s, "cant.read.file"_s, $$new($ObjectArray, {
		arg0,
		arg1
	}));
}

$JCDiagnostic$Error* LauncherProperties$Errors::FileNotFound($Path* arg0) {
	$init(LauncherProperties$Errors);
	return $new($JCDiagnostic$Error, "launcher"_s, "file.not.found"_s, $$new($ObjectArray, {arg0}));
}

$JCDiagnostic$Error* LauncherProperties$Errors::InvalidFilename($String* arg0) {
	$init(LauncherProperties$Errors);
	return $new($JCDiagnostic$Error, "launcher"_s, "invalid.filename"_s, $$new($ObjectArray, {arg0}));
}

$JCDiagnostic$Error* LauncherProperties$Errors::InvalidValueForSource($String* arg0) {
	$init(LauncherProperties$Errors);
	return $new($JCDiagnostic$Error, "launcher"_s, "invalid.value.for.source"_s, $$new($ObjectArray, {arg0}));
}

$JCDiagnostic$Error* LauncherProperties$Errors::NoValueForOption($String* arg0) {
	$init(LauncherProperties$Errors);
	return $new($JCDiagnostic$Error, "launcher"_s, "no.value.for.option"_s, $$new($ObjectArray, {arg0}));
}

void LauncherProperties$Errors::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(LauncherProperties$Errors::CompilationFailed, $new($JCDiagnostic$Error, "launcher"_s, "compilation.failed"_s, $$new($ObjectArray, 0)));
	$assignStatic(LauncherProperties$Errors::EnablePreviewRequiresSource, $new($JCDiagnostic$Error, "launcher"_s, "enable.preview.requires.source"_s, $$new($ObjectArray, 0)));
	$assignStatic(LauncherProperties$Errors::MainNotPublicStatic, $new($JCDiagnostic$Error, "launcher"_s, "main.not.public.static"_s, $$new($ObjectArray, 0)));
	$assignStatic(LauncherProperties$Errors::MainNotVoid, $new($JCDiagnostic$Error, "launcher"_s, "main.not.void"_s, $$new($ObjectArray, 0)));
	$assignStatic(LauncherProperties$Errors::NoArgs, $new($JCDiagnostic$Error, "launcher"_s, "no.args"_s, $$new($ObjectArray, 0)));
	$assignStatic(LauncherProperties$Errors::NoClass, $new($JCDiagnostic$Error, "launcher"_s, "no.class"_s, $$new($ObjectArray, 0)));
}

LauncherProperties$Errors::LauncherProperties$Errors() {
}

$Class* LauncherProperties$Errors::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CompilationFailed", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LauncherProperties$Errors, CompilationFailed)},
		{"EnablePreviewRequiresSource", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LauncherProperties$Errors, EnablePreviewRequiresSource)},
		{"MainNotPublicStatic", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LauncherProperties$Errors, MainNotPublicStatic)},
		{"MainNotVoid", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LauncherProperties$Errors, MainNotVoid)},
		{"NoArgs", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LauncherProperties$Errors, NoArgs)},
		{"NoClass", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LauncherProperties$Errors, NoClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LauncherProperties$Errors, init$, void)},
		{"CantAccessMainMethod", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(LauncherProperties$Errors, CantAccessMainMethod, $JCDiagnostic$Error*, $String*)},
		{"CantFindClass", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(LauncherProperties$Errors, CantFindClass, $JCDiagnostic$Error*, $String*)},
		{"CantFindMainMethod", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(LauncherProperties$Errors, CantFindMainMethod, $JCDiagnostic$Error*, $String*)},
		{"CantReadFile", "(Ljava/nio/file/Path;Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(LauncherProperties$Errors, CantReadFile, $JCDiagnostic$Error*, $Path*, Object$*)},
		{"FileNotFound", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(LauncherProperties$Errors, FileNotFound, $JCDiagnostic$Error*, $Path*)},
		{"InvalidFilename", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(LauncherProperties$Errors, InvalidFilename, $JCDiagnostic$Error*, $String*)},
		{"InvalidValueForSource", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(LauncherProperties$Errors, InvalidValueForSource, $JCDiagnostic$Error*, $String*)},
		{"NoValueForOption", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(LauncherProperties$Errors, NoValueForOption, $JCDiagnostic$Error*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.resources.LauncherProperties$Errors", "com.sun.tools.javac.resources.LauncherProperties", "Errors", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.resources.LauncherProperties$Errors",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.resources.LauncherProperties"
	};
	$loadClass(LauncherProperties$Errors, name, initialize, &classInfo$$, LauncherProperties$Errors::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LauncherProperties$Errors);
	});
	return class$;
}

$Class* LauncherProperties$Errors::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com