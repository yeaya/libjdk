#include <sun/awt/X11/XBaseMenuWindow$MappingData.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <sun/awt/X11/XBaseMenuWindow.h>
#include <sun/awt/X11/XMenuItemPeer.h>
#include <jcpp.h>

using $XMenuItemPeerArray = $Array<::sun::awt::X11::XMenuItemPeer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

void XBaseMenuWindow$MappingData::init$($XMenuItemPeerArray* items) {
	$set(this, items, items);
}

void XBaseMenuWindow$MappingData::init$() {
	$set(this, items, $new($XMenuItemPeerArray, 0));
}

$Object* XBaseMenuWindow$MappingData::clone() {
	try {
		return $Cloneable::clone();
	} catch ($CloneNotSupportedException& ex) {
		$throwNew($InternalError, ex);
	}
	$shouldNotReachHere();
}

$XMenuItemPeerArray* XBaseMenuWindow$MappingData::getItems() {
	return this->items;
}

XBaseMenuWindow$MappingData::XBaseMenuWindow$MappingData() {
}

$Class* XBaseMenuWindow$MappingData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"items", "[Lsun/awt/X11/XMenuItemPeer;", nullptr, $PRIVATE, $field(XBaseMenuWindow$MappingData, items)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Lsun/awt/X11/XMenuItemPeer;)V", nullptr, 0, $method(XBaseMenuWindow$MappingData, init$, void, $XMenuItemPeerArray*)},
		{"<init>", "()V", nullptr, 0, $method(XBaseMenuWindow$MappingData, init$, void)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XBaseMenuWindow$MappingData, clone, $Object*)},
		{"getItems", "()[Lsun/awt/X11/XMenuItemPeer;", nullptr, $PUBLIC, $virtualMethod(XBaseMenuWindow$MappingData, getItems, $XMenuItemPeerArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XBaseMenuWindow$MappingData", "sun.awt.X11.XBaseMenuWindow", "MappingData", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XBaseMenuWindow$MappingData",
		"java.lang.Object",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XBaseMenuWindow"
	};
	$loadClass(XBaseMenuWindow$MappingData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XBaseMenuWindow$MappingData);
	});
	return class$;
}

$Class* XBaseMenuWindow$MappingData::class$ = nullptr;

		} // X11
	} // awt
} // sun