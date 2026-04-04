#include <com/sun/tools/sjavac/comp/FileObjectWithLocation.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingFileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileObject = ::javax::tools::FileObject;
using $ForwardingFileObject = ::javax::tools::ForwardingFileObject;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

void FileObjectWithLocation::init$($FileObject* delegate, $JavaFileManager$Location* loc) {
	$ForwardingFileObject::init$(delegate);
	$set(this, loc, loc);
}

$JavaFileManager$Location* FileObjectWithLocation::getLocation() {
	return this->loc;
}

$FileObject* FileObjectWithLocation::getDelegate() {
	return this->fileObject;
}

$String* FileObjectWithLocation::toString() {
	return $str({"FileObjectWithLocation["_s, this->fileObject, "]"_s});
}

FileObjectWithLocation::FileObjectWithLocation() {
}

$Class* FileObjectWithLocation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"loc", "Ljavax/tools/JavaFileManager$Location;", nullptr, $PRIVATE | $FINAL, $field(FileObjectWithLocation, loc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/tools/FileObject;Ljavax/tools/JavaFileManager$Location;)V", "(TF;Ljavax/tools/JavaFileManager$Location;)V", $PUBLIC, $method(FileObjectWithLocation, init$, void, $FileObject*, $JavaFileManager$Location*)},
		{"getDelegate", "()Ljavax/tools/FileObject;", nullptr, $PUBLIC, $virtualMethod(FileObjectWithLocation, getDelegate, $FileObject*)},
		{"getLocation", "()Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, $virtualMethod(FileObjectWithLocation, getLocation, $JavaFileManager$Location*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileObjectWithLocation, toString, $String*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Lcom/sun/tools/javac/api/ClientCodeWrapper$Trusted;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.comp.FileObjectWithLocation",
		"javax.tools.ForwardingFileObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<F::Ljavax/tools/FileObject;>Ljavax/tools/ForwardingFileObject<TF;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(FileObjectWithLocation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileObjectWithLocation);
	});
	return class$;
}

$Class* FileObjectWithLocation::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com