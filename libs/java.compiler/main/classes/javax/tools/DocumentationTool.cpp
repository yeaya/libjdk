#include <javax/tools/DocumentationTool.h>

#include <java/io/Writer.h>
#include <java/lang/Iterable.h>
#include <java/nio/charset/Charset.h>
#include <java/util/Locale.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/DocumentationTool$DocumentationTask.h>
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
using $DocumentationTool$DocumentationTask = ::javax::tools::DocumentationTool$DocumentationTask;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $OptionChecker = ::javax::tools::OptionChecker;
using $StandardJavaFileManager = ::javax::tools::StandardJavaFileManager;
using $Tool = ::javax::tools::Tool;

namespace javax {
	namespace tools {

$MethodInfo _DocumentationTool_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getStandardFileManager", "(Ljavax/tools/DiagnosticListener;Ljava/util/Locale;Ljava/nio/charset/Charset;)Ljavax/tools/StandardJavaFileManager;", "(Ljavax/tools/DiagnosticListener<-Ljavax/tools/JavaFileObject;>;Ljava/util/Locale;Ljava/nio/charset/Charset;)Ljavax/tools/StandardJavaFileManager;", $PUBLIC | $ABSTRACT},
	{"getTask", "(Ljava/io/Writer;Ljavax/tools/JavaFileManager;Ljavax/tools/DiagnosticListener;Ljava/lang/Class;Ljava/lang/Iterable;Ljava/lang/Iterable;)Ljavax/tools/DocumentationTool$DocumentationTask;", "(Ljava/io/Writer;Ljavax/tools/JavaFileManager;Ljavax/tools/DiagnosticListener<-Ljavax/tools/JavaFileObject;>;Ljava/lang/Class<*>;Ljava/lang/Iterable<Ljava/lang/String;>;Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;)Ljavax/tools/DocumentationTool$DocumentationTask;", $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DocumentationTool_InnerClassesInfo_[] = {
	{"javax.tools.DocumentationTool$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.tools.DocumentationTool$Location", "javax.tools.DocumentationTool", "Location", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"javax.tools.DocumentationTool$DocumentationTask", "javax.tools.DocumentationTool", "DocumentationTask", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DocumentationTool_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.tools.DocumentationTool",
	nullptr,
	"javax.tools.Tool,javax.tools.OptionChecker",
	nullptr,
	_DocumentationTool_MethodInfo_,
	nullptr,
	nullptr,
	_DocumentationTool_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.tools.DocumentationTool$1,javax.tools.DocumentationTool$Location,javax.tools.DocumentationTool$DocumentationTask"
};

$Object* allocate$DocumentationTool($Class* clazz) {
	return $of($alloc(DocumentationTool));
}

int32_t DocumentationTool::hashCode() {
	 return this->$Tool::hashCode();
}

bool DocumentationTool::equals(Object$* arg0) {
	 return this->$Tool::equals(arg0);
}

$Object* DocumentationTool::clone() {
	 return this->$Tool::clone();
}

$String* DocumentationTool::toString() {
	 return this->$Tool::toString();
}

void DocumentationTool::finalize() {
	this->$Tool::finalize();
}

$Class* DocumentationTool::load$($String* name, bool initialize) {
	$loadClass(DocumentationTool, name, initialize, &_DocumentationTool_ClassInfo_, allocate$DocumentationTool);
	return class$;
}

$Class* DocumentationTool::class$ = nullptr;

	} // tools
} // javax