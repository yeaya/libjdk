#include <com/sun/tools/javac/processing/JavacFiler$FilerWriter.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/processing/JavacFiler.h>
#include <java/io/FilterWriter.h>
#include <java/io/Writer.h>
#include <javax/tools/FileObject.h>
#include <jcpp.h>

using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $JavacFiler = ::com::sun::tools::javac::processing::JavacFiler;
using $FilterWriter = ::java::io::FilterWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileObject = ::javax::tools::FileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

void JavacFiler$FilerWriter::init$($JavacFiler* this$0, $Symbol$ModuleSymbol* mod, $String* typeName, $FileObject* fileObject) {
	$set(this, this$0, this$0);
	$FilterWriter::init$($($nc(fileObject)->openWriter()));
	this->closed = false;
	$set(this, mod, mod);
	$set(this, typeName, typeName);
	$set(this, fileObject, fileObject);
}

void JavacFiler$FilerWriter::close() {
	$synchronized(this) {
		if (!this->closed) {
			this->closed = true;
			this->this$0->closeFileObject(this->mod, this->typeName, this->fileObject);
			$nc(this->out)->close();
		}
	}
}

JavacFiler$FilerWriter::JavacFiler$FilerWriter() {
}

$Class* JavacFiler$FilerWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/processing/JavacFiler;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFiler$FilerWriter, this$0)},
		{"mod", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, 0, $field(JavacFiler$FilerWriter, mod)},
		{"typeName", "Ljava/lang/String;", nullptr, 0, $field(JavacFiler$FilerWriter, typeName)},
		{"fileObject", "Ljavax/tools/FileObject;", nullptr, 0, $field(JavacFiler$FilerWriter, fileObject)},
		{"closed", "Z", nullptr, 0, $field(JavacFiler$FilerWriter, closed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/processing/JavacFiler;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/lang/String;Ljavax/tools/FileObject;)V", nullptr, 0, $method(JavacFiler$FilerWriter, init$, void, $JavacFiler*, $Symbol$ModuleSymbol*, $String*, $FileObject*), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(JavacFiler$FilerWriter, close, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.processing.JavacFiler$FilerWriter", "com.sun.tools.javac.processing.JavacFiler", "FilerWriter", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.processing.JavacFiler$FilerWriter",
		"java.io.FilterWriter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.processing.JavacFiler"
	};
	$loadClass(JavacFiler$FilerWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JavacFiler$FilerWriter));
	});
	return class$;
}

$Class* JavacFiler$FilerWriter::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com