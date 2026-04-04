#include <com/sun/tools/javac/processing/JavacFiler$FilerInputFileObject.h>
#include <com/sun/tools/javac/processing/JavacFiler.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/lang/IllegalStateException.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingFileObject.h>
#include <jcpp.h>

using $JavacFiler = ::com::sun::tools::javac::processing::JavacFiler;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileObject = ::javax::tools::FileObject;
using $ForwardingFileObject = ::javax::tools::ForwardingFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

void JavacFiler$FilerInputFileObject::init$($JavacFiler* this$0, $FileObject* fileObject) {
	$set(this, this$0, this$0);
	$ForwardingFileObject::init$(fileObject);
}

$OutputStream* JavacFiler$FilerInputFileObject::openOutputStream() {
	$throwNew($IllegalStateException, "FileObject was not opened for writing."_s);
	$shouldNotReachHere();
}

$Writer* JavacFiler$FilerInputFileObject::openWriter() {
	$throwNew($IllegalStateException, "FileObject was not opened for writing."_s);
	$shouldNotReachHere();
}

bool JavacFiler$FilerInputFileObject::delete$() {
	return false;
}

JavacFiler$FilerInputFileObject::JavacFiler$FilerInputFileObject() {
}

$Class* JavacFiler$FilerInputFileObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/processing/JavacFiler;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFiler$FilerInputFileObject, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/processing/JavacFiler;Ljavax/tools/FileObject;)V", nullptr, 0, $method(JavacFiler$FilerInputFileObject, init$, void, $JavacFiler*, $FileObject*)},
		{"delete", "()Z", nullptr, $PUBLIC, $virtualMethod(JavacFiler$FilerInputFileObject, delete$, bool)},
		{"openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(JavacFiler$FilerInputFileObject, openOutputStream, $OutputStream*), "java.io.IOException"},
		{"openWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(JavacFiler$FilerInputFileObject, openWriter, $Writer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.processing.JavacFiler$FilerInputFileObject", "com.sun.tools.javac.processing.JavacFiler", "FilerInputFileObject", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.processing.JavacFiler$FilerInputFileObject",
		"javax.tools.ForwardingFileObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/tools/ForwardingFileObject<Ljavax/tools/FileObject;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.processing.JavacFiler"
	};
	$loadClass(JavacFiler$FilerInputFileObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacFiler$FilerInputFileObject);
	});
	return class$;
}

$Class* JavacFiler$FilerInputFileObject::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com