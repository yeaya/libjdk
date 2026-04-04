#include <com/sun/tools/javac/code/ClassFinder$1.h>
#include <com/sun/tools/javac/code/ClassFinder.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef CLASS
#undef HAS_RESOURCE
#undef SOURCE

using $ClassFinder = ::com::sun::tools::javac::code::ClassFinder;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Set = ::java::util::Set;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void ClassFinder$1::init$($ClassFinder* this$0, $Iterable* val$listed, $Symbol$PackageSymbol* val$p, $Set* val$kinds) {
	$set(this, this$0, this$0);
	$set(this, val$listed, val$listed);
	$set(this, val$p, val$p);
	$set(this, val$kinds, val$kinds);
	$set(this, original, $nc(this->val$listed)->iterator());
}

bool ClassFinder$1::hasNext() {
	$useLocalObjectStack();
	if (this->next$ == nullptr) {
		while ($nc(this->original)->hasNext()) {
			$var($JavaFileObject, fo, $cast($JavaFileObject, this->original->next()));
			$init($JavaFileObject$Kind);
			bool var$0 = $nc(fo)->getKind() != $JavaFileObject$Kind::CLASS;
			if (var$0 && fo->getKind() != $JavaFileObject$Kind::SOURCE) {
				$nc(this->val$p)->flags_field |= $Flags::HAS_RESOURCE;
			}
			if ($nc(this->val$kinds)->contains($(fo->getKind()))) {
				$set(this, next$, fo);
				break;
			}
		}
	}
	return this->next$ != nullptr;
}

$Object* ClassFinder$1::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	$var($JavaFileObject, result, this->next$);
	$set(this, next$, nullptr);
	return result;
}

ClassFinder$1::ClassFinder$1() {
}

$Class* ClassFinder$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/ClassFinder;", nullptr, $FINAL | $SYNTHETIC, $field(ClassFinder$1, this$0)},
		{"val$kinds", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(ClassFinder$1, val$kinds)},
		{"val$p", "Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $FINAL | $SYNTHETIC, $field(ClassFinder$1, val$p)},
		{"val$listed", "Ljava/lang/Iterable;", nullptr, $FINAL | $SYNTHETIC, $field(ClassFinder$1, val$listed)},
		{"original", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljavax/tools/JavaFileObject;>;", $PRIVATE | $FINAL, $field(ClassFinder$1, original)},
		{"next", "Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE, $field(ClassFinder$1, next$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/ClassFinder;Ljava/lang/Iterable;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljava/util/Set;)V", "()V", 0, $method(ClassFinder$1, init$, void, $ClassFinder*, $Iterable*, $Symbol$PackageSymbol*, $Set*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ClassFinder$1, hasNext, bool)},
		{"next", "()Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, $virtualMethod(ClassFinder$1, next, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.ClassFinder",
		"list",
		"(Ljavax/tools/JavaFileManager$Location;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljava/lang/String;Ljava/util/Set;)Ljava/lang/Iterable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.ClassFinder$1", nullptr, nullptr, 0},
		{"javax.tools.JavaFileManager$Location", "javax.tools.JavaFileManager", "Location", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.code.Symbol$PackageSymbol", "com.sun.tools.javac.code.Symbol", "PackageSymbol", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.ClassFinder$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljavax/tools/JavaFileObject;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.ClassFinder"
	};
	$loadClass(ClassFinder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassFinder$1);
	});
	return class$;
}

$Class* ClassFinder$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com