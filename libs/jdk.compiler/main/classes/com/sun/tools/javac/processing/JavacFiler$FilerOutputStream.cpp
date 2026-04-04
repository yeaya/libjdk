#include <com/sun/tools/javac/processing/JavacFiler$FilerOutputStream.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/processing/JavacFiler.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/util/Objects.h>
#include <javax/tools/FileObject.h>
#include <jcpp.h>

using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $JavacFiler = ::com::sun::tools::javac::processing::JavacFiler;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $FileObject = ::javax::tools::FileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

void JavacFiler$FilerOutputStream::init$($JavacFiler* this$0, $Symbol$ModuleSymbol* mod, $String* typeName, $FileObject* fileObject) {
	$set(this, this$0, this$0);
	$FilterOutputStream::init$($($nc(fileObject)->openOutputStream()));
	this->closed = false;
	$set(this, mod, mod);
	$set(this, typeName, typeName);
	$set(this, fileObject, fileObject);
}

void JavacFiler$FilerOutputStream::write($bytes* b, int32_t off, int32_t len) {
	$Objects::checkFromIndexSize(off, len, $nc(b)->length);
	$nc(this->out)->write(b, off, len);
}

void JavacFiler$FilerOutputStream::close() {
	$synchronized(this) {
		if (!this->closed) {
			this->closed = true;
			this->this$0->closeFileObject(this->mod, this->typeName, this->fileObject);
			$nc(this->out)->close();
		}
	}
}

JavacFiler$FilerOutputStream::JavacFiler$FilerOutputStream() {
}

$Class* JavacFiler$FilerOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/processing/JavacFiler;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFiler$FilerOutputStream, this$0)},
		{"mod", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, 0, $field(JavacFiler$FilerOutputStream, mod)},
		{"typeName", "Ljava/lang/String;", nullptr, 0, $field(JavacFiler$FilerOutputStream, typeName)},
		{"fileObject", "Ljavax/tools/FileObject;", nullptr, 0, $field(JavacFiler$FilerOutputStream, fileObject)},
		{"closed", "Z", nullptr, 0, $field(JavacFiler$FilerOutputStream, closed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/processing/JavacFiler;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/lang/String;Ljavax/tools/FileObject;)V", nullptr, 0, $method(JavacFiler$FilerOutputStream, init$, void, $JavacFiler*, $Symbol$ModuleSymbol*, $String*, $FileObject*), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(JavacFiler$FilerOutputStream, close, void), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(JavacFiler$FilerOutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.processing.JavacFiler$FilerOutputStream", "com.sun.tools.javac.processing.JavacFiler", "FilerOutputStream", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.processing.JavacFiler$FilerOutputStream",
		"java.io.FilterOutputStream",
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
	$loadClass(JavacFiler$FilerOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JavacFiler$FilerOutputStream));
	});
	return class$;
}

$Class* JavacFiler$FilerOutputStream::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com