#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader$1.h>
#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader.h>
#include <java/net/URL.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $Main$MemoryClassLoader = ::com::sun::tools::javac::launcher::Main$MemoryClassLoader;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

void Main$MemoryClassLoader$1::init$($Main$MemoryClassLoader* this$0, $String* val$name) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
	$set(this, next, this->this$0->findResource(this->val$name));
}

bool Main$MemoryClassLoader$1::hasMoreElements() {
	return (this->next != nullptr);
}

$Object* Main$MemoryClassLoader$1::nextElement() {
	if (this->next == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($URL, u, this->next);
	$set(this, next, nullptr);
	return u;
}

Main$MemoryClassLoader$1::Main$MemoryClassLoader$1() {
}

$Class* Main$MemoryClassLoader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/launcher/Main$MemoryClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(Main$MemoryClassLoader$1, this$0)},
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Main$MemoryClassLoader$1, val$name)},
		{"next", "Ljava/net/URL;", nullptr, $PRIVATE, $field(Main$MemoryClassLoader$1, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/launcher/Main$MemoryClassLoader;Ljava/lang/String;)V", "()V", 0, $method(Main$MemoryClassLoader$1, init$, void, $Main$MemoryClassLoader*, $String*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(Main$MemoryClassLoader$1, hasMoreElements, bool)},
		{"nextElement", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(Main$MemoryClassLoader$1, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.launcher.Main$MemoryClassLoader",
		"findResources",
		"(Ljava/lang/String;)Ljava/util/Enumeration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.launcher.Main$MemoryClassLoader", "com.sun.tools.javac.launcher.Main", "MemoryClassLoader", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.launcher.Main$MemoryClassLoader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.launcher.Main$MemoryClassLoader$1",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/net/URL;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.launcher.Main"
	};
	$loadClass(Main$MemoryClassLoader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Main$MemoryClassLoader$1);
	});
	return class$;
}

$Class* Main$MemoryClassLoader$1::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com