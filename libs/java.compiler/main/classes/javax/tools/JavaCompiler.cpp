#include <javax/tools/JavaCompiler.h>

#include <java/io/Writer.h>
#include <java/lang/Iterable.h>
#include <java/nio/charset/Charset.h>
#include <java/util/Locale.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/JavaCompiler$CompilationTask.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <javax/tools/Tool.h>
#include <jcpp.h>

using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $Locale = ::java::util::Locale;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;
using $JavaCompiler$CompilationTask = ::javax::tools::JavaCompiler$CompilationTask;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $StandardJavaFileManager = ::javax::tools::StandardJavaFileManager;
using $Tool = ::javax::tools::Tool;

namespace javax {
	namespace tools {

$MethodInfo _JavaCompiler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getStandardFileManager", "(Ljavax/tools/DiagnosticListener;Ljava/util/Locale;Ljava/nio/charset/Charset;)Ljavax/tools/StandardJavaFileManager;", "(Ljavax/tools/DiagnosticListener<-Ljavax/tools/JavaFileObject;>;Ljava/util/Locale;Ljava/nio/charset/Charset;)Ljavax/tools/StandardJavaFileManager;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaCompiler, getStandardFileManager, $StandardJavaFileManager*, $DiagnosticListener*, $Locale*, $Charset*)},
	{"getTask", "(Ljava/io/Writer;Ljavax/tools/JavaFileManager;Ljavax/tools/DiagnosticListener;Ljava/lang/Iterable;Ljava/lang/Iterable;Ljava/lang/Iterable;)Ljavax/tools/JavaCompiler$CompilationTask;", "(Ljava/io/Writer;Ljavax/tools/JavaFileManager;Ljavax/tools/DiagnosticListener<-Ljavax/tools/JavaFileObject;>;Ljava/lang/Iterable<Ljava/lang/String;>;Ljava/lang/Iterable<Ljava/lang/String;>;Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;)Ljavax/tools/JavaCompiler$CompilationTask;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaCompiler, getTask, $JavaCompiler$CompilationTask*, $Writer*, $JavaFileManager*, $DiagnosticListener*, $Iterable*, $Iterable*, $Iterable*)},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavaCompiler_InnerClassesInfo_[] = {
	{"javax.tools.JavaCompiler$CompilationTask", "javax.tools.JavaCompiler", "CompilationTask", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavaCompiler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.tools.JavaCompiler",
	nullptr,
	"javax.tools.Tool,javax.tools.OptionChecker",
	nullptr,
	_JavaCompiler_MethodInfo_,
	nullptr,
	nullptr,
	_JavaCompiler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.tools.JavaCompiler$CompilationTask"
};

$Object* allocate$JavaCompiler($Class* clazz) {
	return $of($alloc(JavaCompiler));
}

int32_t JavaCompiler::hashCode() {
	 return this->$Tool::hashCode();
}

bool JavaCompiler::equals(Object$* arg0) {
	 return this->$Tool::equals(arg0);
}

$Object* JavaCompiler::clone() {
	 return this->$Tool::clone();
}

$String* JavaCompiler::toString() {
	 return this->$Tool::toString();
}

void JavaCompiler::finalize() {
	this->$Tool::finalize();
}

$Class* JavaCompiler::load$($String* name, bool initialize) {
	$loadClass(JavaCompiler, name, initialize, &_JavaCompiler_ClassInfo_, allocate$JavaCompiler);
	return class$;
}

$Class* JavaCompiler::class$ = nullptr;

	} // tools
} // javax