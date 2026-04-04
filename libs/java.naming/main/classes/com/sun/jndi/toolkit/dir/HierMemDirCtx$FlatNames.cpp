#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$FlatNames.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$BaseFlatNames.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameClassPair.h>
#include <jcpp.h>

using $HierMemDirCtx = ::com::sun::jndi::toolkit::dir::HierMemDirCtx;
using $HierMemDirCtx$BaseFlatNames = ::com::sun::jndi::toolkit::dir::HierMemDirCtx$BaseFlatNames;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Name = ::javax::naming::Name;
using $NameClassPair = ::javax::naming::NameClassPair;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

void HierMemDirCtx$FlatNames::init$($HierMemDirCtx* this$0, $Enumeration* names) {
	$set(this, this$0, this$0);
	$HierMemDirCtx$BaseFlatNames::init$(this$0, names);
}

$Object* HierMemDirCtx$FlatNames::next() {
	$useLocalObjectStack();
	$var($Name, name, $cast($Name, $nc(this->names)->nextElement()));
	$var($String, className, $$nc($nc(this->this$0->bindings)->get(name))->getClass()->getName());
	return $new($NameClassPair, $($nc(name)->toString()), className);
}

HierMemDirCtx$FlatNames::HierMemDirCtx$FlatNames() {
}

$Class* HierMemDirCtx$FlatNames::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jndi/toolkit/dir/HierMemDirCtx;", nullptr, $FINAL | $SYNTHETIC, $field(HierMemDirCtx$FlatNames, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jndi/toolkit/dir/HierMemDirCtx;Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<Ljavax/naming/Name;>;)V", 0, $method(HierMemDirCtx$FlatNames, init$, void, $HierMemDirCtx*, $Enumeration*)},
		{"next", "()Ljavax/naming/NameClassPair;", nullptr, $PUBLIC, $virtualMethod(HierMemDirCtx$FlatNames, next, $Object*), "javax.naming.NamingException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.toolkit.dir.HierMemDirCtx$FlatNames", "com.sun.jndi.toolkit.dir.HierMemDirCtx", "FlatNames", $PRIVATE | $FINAL},
		{"com.sun.jndi.toolkit.dir.HierMemDirCtx$BaseFlatNames", "com.sun.jndi.toolkit.dir.HierMemDirCtx", "BaseFlatNames", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jndi.toolkit.dir.HierMemDirCtx$FlatNames",
		"com.sun.jndi.toolkit.dir.HierMemDirCtx$BaseFlatNames",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/jndi/toolkit/dir/HierMemDirCtx$BaseFlatNames<Ljavax/naming/NameClassPair;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jndi.toolkit.dir.HierMemDirCtx"
	};
	$loadClass(HierMemDirCtx$FlatNames, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HierMemDirCtx$FlatNames);
	});
	return class$;
}

$Class* HierMemDirCtx$FlatNames::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com