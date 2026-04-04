#include <com/sun/java/swing/plaf/gtk/Metacity$1.h>
#include <com/sun/java/swing/plaf/gtk/Metacity.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

void Metacity$1::init$($URL* val$xmlFile) {
	$set(this, val$xmlFile, val$xmlFile);
}

$Object* Metacity$1::run() {
	try {
		return $new($BufferedInputStream, $($nc(this->val$xmlFile)->openStream()));
	} catch ($IOException& ex) {
		return nullptr;
	}
	$shouldNotReachHere();
}

Metacity$1::Metacity$1() {
}

$Class* Metacity$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$xmlFile", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(Metacity$1, val$xmlFile)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/URL;)V", "()V", 0, $method(Metacity$1, init$, void, $URL*)},
		{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(Metacity$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.gtk.Metacity",
		"getXMLDoc",
		"(Ljava/net/URL;)Lorg/w3c/dom/Document;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.Metacity$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.Metacity$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.Metacity"
	};
	$loadClass(Metacity$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Metacity$1);
	});
	return class$;
}

$Class* Metacity$1::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com