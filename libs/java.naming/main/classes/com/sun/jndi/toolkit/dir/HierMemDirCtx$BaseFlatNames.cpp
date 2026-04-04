#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$BaseFlatNames.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx.h>
#include <java/util/Enumeration.h>
#include <java/util/NoSuchElementException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $HierMemDirCtx = ::com::sun::jndi::toolkit::dir::HierMemDirCtx;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $NamingException = ::javax::naming::NamingException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

void HierMemDirCtx$BaseFlatNames::init$($HierMemDirCtx* this$0, $Enumeration* names) {
	$set(this, this$0, this$0);
	$set(this, names, names);
}

bool HierMemDirCtx$BaseFlatNames::hasMoreElements() {
	try {
		return hasMore();
	} catch ($NamingException& e) {
		return false;
	}
	$shouldNotReachHere();
}

bool HierMemDirCtx$BaseFlatNames::hasMore() {
	return $nc(this->names)->hasMoreElements();
}

$Object* HierMemDirCtx$BaseFlatNames::nextElement() {
	try {
		return next();
	} catch ($NamingException& e) {
		$throwNew($NoSuchElementException, $(e->toString()));
	}
	$shouldNotReachHere();
}

void HierMemDirCtx$BaseFlatNames::close() {
	$set(this, names, nullptr);
}

HierMemDirCtx$BaseFlatNames::HierMemDirCtx$BaseFlatNames() {
}

$Class* HierMemDirCtx$BaseFlatNames::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jndi/toolkit/dir/HierMemDirCtx;", nullptr, $FINAL | $SYNTHETIC, $field(HierMemDirCtx$BaseFlatNames, this$0)},
		{"names", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljavax/naming/Name;>;", 0, $field(HierMemDirCtx$BaseFlatNames, names)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jndi/toolkit/dir/HierMemDirCtx;Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<Ljavax/naming/Name;>;)V", 0, $method(HierMemDirCtx$BaseFlatNames, init$, void, $HierMemDirCtx*, $Enumeration*)},
		{"close", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(HierMemDirCtx$BaseFlatNames, close, void)},
		{"hasMore", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(HierMemDirCtx$BaseFlatNames, hasMore, bool), "javax.naming.NamingException"},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(HierMemDirCtx$BaseFlatNames, hasMoreElements, bool)},
		{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"nextElement", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $FINAL, $virtualMethod(HierMemDirCtx$BaseFlatNames, nextElement, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.toolkit.dir.HierMemDirCtx$BaseFlatNames", "com.sun.jndi.toolkit.dir.HierMemDirCtx", "BaseFlatNames", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.jndi.toolkit.dir.HierMemDirCtx$BaseFlatNames",
		"java.lang.Object",
		"javax.naming.NamingEnumeration",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/naming/NamingEnumeration<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jndi.toolkit.dir.HierMemDirCtx"
	};
	$loadClass(HierMemDirCtx$BaseFlatNames, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HierMemDirCtx$BaseFlatNames);
	});
	return class$;
}

$Class* HierMemDirCtx$BaseFlatNames::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com