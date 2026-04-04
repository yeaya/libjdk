#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$FlatBindings.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$BaseFlatNames.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Binding.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/spi/DirectoryManager.h>
#include <jcpp.h>

using $HierMemDirCtx = ::com::sun::jndi::toolkit::dir::HierMemDirCtx;
using $HierMemDirCtx$BaseFlatNames = ::com::sun::jndi::toolkit::dir::HierMemDirCtx$BaseFlatNames;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Binding = ::javax::naming::Binding;
using $Name = ::javax::naming::Name;
using $NamingException = ::javax::naming::NamingException;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirectoryManager = ::javax::naming::spi::DirectoryManager;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

void HierMemDirCtx$FlatBindings::init$($HierMemDirCtx* this$0, $Hashtable* bindings, $Hashtable* env, bool useFactory) {
	$set(this, this$0, this$0);
	$HierMemDirCtx$BaseFlatNames::init$(this$0, $($nc(bindings)->keys()));
	$set(this, env, env);
	$set(this, bds, bindings);
	this->useFactory = useFactory;
}

$Object* HierMemDirCtx$FlatBindings::next() {
	$useLocalObjectStack();
	$var($Name, name, $cast($Name, $nc(this->names)->nextElement()));
	$var($HierMemDirCtx, obj, $cast($HierMemDirCtx, $nc(this->bds)->get(name)));
	$var($Object, answer, obj);
	if (this->useFactory) {
		$var($Attributes, attrs, $nc(obj)->getAttributes(""_s));
		try {
			$assign(answer, $DirectoryManager::getObjectInstance(obj, name, this->this$0, this->env, attrs));
		} catch ($NamingException& e) {
			$throw(e);
		} catch ($Exception& e) {
			$var($NamingException, e2, $new($NamingException, "Problem calling getObjectInstance"_s));
			e2->setRootCause(e);
			$throw(e2);
		}
	}
	return $new($Binding, $($nc(name)->toString()), answer);
}

HierMemDirCtx$FlatBindings::HierMemDirCtx$FlatBindings() {
}

$Class* HierMemDirCtx$FlatBindings::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jndi/toolkit/dir/HierMemDirCtx;", nullptr, $FINAL | $SYNTHETIC, $field(HierMemDirCtx$FlatBindings, this$0)},
		{"bds", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/naming/Name;Ljava/lang/Object;>;", $PRIVATE, $field(HierMemDirCtx$FlatBindings, bds)},
		{"env", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(HierMemDirCtx$FlatBindings, env)},
		{"useFactory", "Z", nullptr, $PRIVATE, $field(HierMemDirCtx$FlatBindings, useFactory)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jndi/toolkit/dir/HierMemDirCtx;Ljava/util/Hashtable;Ljava/util/Hashtable;Z)V", "(Ljava/util/Hashtable<Ljavax/naming/Name;Ljava/lang/Object;>;Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;Z)V", 0, $method(HierMemDirCtx$FlatBindings, init$, void, $HierMemDirCtx*, $Hashtable*, $Hashtable*, bool)},
		{"next", "()Ljavax/naming/Binding;", nullptr, $PUBLIC, $virtualMethod(HierMemDirCtx$FlatBindings, next, $Object*), "javax.naming.NamingException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.toolkit.dir.HierMemDirCtx$FlatBindings", "com.sun.jndi.toolkit.dir.HierMemDirCtx", "FlatBindings", $PRIVATE | $FINAL},
		{"com.sun.jndi.toolkit.dir.HierMemDirCtx$BaseFlatNames", "com.sun.jndi.toolkit.dir.HierMemDirCtx", "BaseFlatNames", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jndi.toolkit.dir.HierMemDirCtx$FlatBindings",
		"com.sun.jndi.toolkit.dir.HierMemDirCtx$BaseFlatNames",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/jndi/toolkit/dir/HierMemDirCtx$BaseFlatNames<Ljavax/naming/Binding;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jndi.toolkit.dir.HierMemDirCtx"
	};
	$loadClass(HierMemDirCtx$FlatBindings, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HierMemDirCtx$FlatBindings);
	});
	return class$;
}

$Class* HierMemDirCtx$FlatBindings::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com