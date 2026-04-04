#include <com/sun/tools/sjavac/comp/JavaFileObjectWithLocation.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingFileObject.h>
#include <javax/tools/ForwardingJavaFileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ForwardingJavaFileObject = ::javax::tools::ForwardingJavaFileObject;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

void JavaFileObjectWithLocation::init$($JavaFileObject* delegate, $JavaFileManager$Location* loc) {
	$ForwardingJavaFileObject::init$(delegate);
	$set(this, loc, loc);
}

$JavaFileManager$Location* JavaFileObjectWithLocation::getLocation() {
	return this->loc;
}

$JavaFileObject* JavaFileObjectWithLocation::getDelegate() {
	return $cast($JavaFileObject, this->fileObject);
}

$String* JavaFileObjectWithLocation::toString() {
	return $str({"JavaFileObjectWithLocation[loc: "_s, this->loc, ", "_s, this->fileObject, "]"_s});
}

int32_t JavaFileObjectWithLocation::hashCode() {
	int32_t var$0 = $nc(this->loc)->hashCode();
	return var$0 ^ $nc($cast($JavaFileObject, this->fileObject))->hashCode();
}

bool JavaFileObjectWithLocation::equals(Object$* obj) {
	$var(JavaFileObjectWithLocation, javaFileObjectWithLocation, nullptr);
	bool var$2 = $instanceOf(JavaFileObjectWithLocation, obj);
	if (var$2) {
		$assign(javaFileObjectWithLocation, $cast(JavaFileObjectWithLocation, obj));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $nc(this->loc)->equals($nc(javaFileObjectWithLocation)->loc);
	return var$0 && $nc($cast($JavaFileObject, this->fileObject))->equals(javaFileObjectWithLocation->fileObject);
}

JavaFileObjectWithLocation::JavaFileObjectWithLocation() {
}

$Class* JavaFileObjectWithLocation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"loc", "Ljavax/tools/JavaFileManager$Location;", nullptr, $PRIVATE | $FINAL, $field(JavaFileObjectWithLocation, loc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/tools/JavaFileObject;Ljavax/tools/JavaFileManager$Location;)V", "(TF;Ljavax/tools/JavaFileManager$Location;)V", $PUBLIC, $method(JavaFileObjectWithLocation, init$, void, $JavaFileObject*, $JavaFileManager$Location*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JavaFileObjectWithLocation, equals, bool, Object$*)},
		{"getDelegate", "()Ljavax/tools/JavaFileObject;", "()TF;", $PUBLIC, $virtualMethod(JavaFileObjectWithLocation, getDelegate, $JavaFileObject*)},
		{"getLocation", "()Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, $virtualMethod(JavaFileObjectWithLocation, getLocation, $JavaFileManager$Location*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(JavaFileObjectWithLocation, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavaFileObjectWithLocation, toString, $String*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Lcom/sun/tools/javac/api/ClientCodeWrapper$Trusted;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.comp.JavaFileObjectWithLocation",
		"javax.tools.ForwardingJavaFileObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<F::Ljavax/tools/JavaFileObject;>Ljavax/tools/ForwardingJavaFileObject<TF;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(JavaFileObjectWithLocation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JavaFileObjectWithLocation));
	});
	return class$;
}

$Class* JavaFileObjectWithLocation::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com