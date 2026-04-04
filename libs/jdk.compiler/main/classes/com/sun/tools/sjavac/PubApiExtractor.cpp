#include <com/sun/tools/sjavac/PubApiExtractor.h>
#include <com/sun/source/util/JavacTask.h>
#include <com/sun/tools/javac/api/JavacTool.h>
#include <com/sun/tools/javac/code/ClassFinder.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/sjavac/comp/PubapiVisitor.h>
#include <com/sun/tools/sjavac/comp/SmartFileManager.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <com/sun/tools/sjavac/pubapi/PubApi.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Writer.h>
#include <java/lang/Iterable.h>
#include <java/nio/charset/Charset.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/util/AbstractElementVisitor6.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <jcpp.h>

using $JavacTool = ::com::sun::tools::javac::api::JavacTool;
using $ClassFinder = ::com::sun::tools::javac::code::ClassFinder;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $Context = ::com::sun::tools::javac::util::Context;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $PubapiVisitor = ::com::sun::tools::sjavac::comp::PubapiVisitor;
using $SmartFileManager = ::com::sun::tools::sjavac::comp::SmartFileManager;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $PubApi = ::com::sun::tools::sjavac::pubapi::PubApi;
using $PrintWriter = ::java::io::PrintWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $Arrays = ::java::util::Arrays;
using $Locale = ::java::util::Locale;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;
using $JavaFileManager = ::javax::tools::JavaFileManager;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

void PubApiExtractor::init$($Options* options) {
	$useLocalObjectStack();
	$var($JavacTool, compiler, $JavacTool::create());
	$set(this, fileManager, $new($SmartFileManager, $($nc(compiler)->getStandardFileManager(nullptr, nullptr, nullptr))));
	$set(this, context, $new($Context));
	$var($StringArray, args, $nc(options)->prepJavacArgs());
	$var($Writer, var$0, $new($PrintWriter, $System::err));
	$var($JavaFileManager, var$1, this->fileManager);
	$set(this, task, compiler->getTask(var$0, var$1, nullptr, $($Arrays::asList(args)), nullptr, nullptr, this->context));
	$JavaCompiler::instance(this->context);
}

$PubApi* PubApiExtractor::getPubApi($String* fullyQualifiedClassName) {
	$useLocalObjectStack();
	$var($Symtab, syms, $Symtab::instance(this->context));
	$var($ClassFinder, cr, $ClassFinder::instance(this->context));
	$var($Names, ns, $Names::instance(this->context));
	$var($Name, n, $nc(ns)->fromString(fullyQualifiedClassName));
	$var($Symbol$ClassSymbol, cs, $nc(cr)->loadClass($($nc(syms)->inferModule($($Convert::packagePart(n)))), n));
	$var($PubapiVisitor, v, $new($PubapiVisitor));
	v->visit($cast($Symbol$TypeSymbol, cs));
	return v->getCollectedPubApi();
}

void PubApiExtractor::close() {
	this->fileManager->close();
}

PubApiExtractor::PubApiExtractor() {
}

$Class* PubApiExtractor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"context", "Lcom/sun/tools/javac/util/Context;", nullptr, $FINAL, $field(PubApiExtractor, context)},
		{"task", "Ljavax/tools/JavaCompiler$CompilationTask;", nullptr, $FINAL, $field(PubApiExtractor, task)},
		{"fileManager", "Lcom/sun/tools/sjavac/comp/SmartFileManager;", nullptr, $FINAL, $field(PubApiExtractor, fileManager)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/sjavac/options/Options;)V", nullptr, $PUBLIC, $method(PubApiExtractor, init$, void, $Options*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(PubApiExtractor, close, void), "java.io.IOException"},
		{"getPubApi", "(Ljava/lang/String;)Lcom/sun/tools/sjavac/pubapi/PubApi;", nullptr, $PUBLIC, $virtualMethod(PubApiExtractor, getPubApi, $PubApi*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.PubApiExtractor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PubApiExtractor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PubApiExtractor);
	});
	return class$;
}

$Class* PubApiExtractor::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com