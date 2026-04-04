#include <sun/awt/X11/XMenuBarPeer$MappingData.h>
#include <sun/awt/X11/XBaseMenuWindow$MappingData.h>
#include <sun/awt/X11/XMenuBarPeer.h>
#include <sun/awt/X11/XMenuItemPeer.h>
#include <jcpp.h>

using $XMenuItemPeerArray = $Array<::sun::awt::X11::XMenuItemPeer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XBaseMenuWindow$MappingData = ::sun::awt::X11::XBaseMenuWindow$MappingData;

namespace sun {
	namespace awt {
		namespace X11 {

void XMenuBarPeer$MappingData::init$($XMenuItemPeerArray* items, int32_t desiredHeight) {
	$XBaseMenuWindow$MappingData::init$(items);
	this->desiredHeight = desiredHeight;
}

void XMenuBarPeer$MappingData::init$() {
	$XBaseMenuWindow$MappingData::init$();
	this->desiredHeight = 0;
}

int32_t XMenuBarPeer$MappingData::getDesiredHeight() {
	return this->desiredHeight;
}

XMenuBarPeer$MappingData::XMenuBarPeer$MappingData() {
}

$Class* XMenuBarPeer$MappingData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"desiredHeight", "I", nullptr, 0, $field(XMenuBarPeer$MappingData, desiredHeight)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Lsun/awt/X11/XMenuItemPeer;I)V", nullptr, 0, $method(XMenuBarPeer$MappingData, init$, void, $XMenuItemPeerArray*, int32_t)},
		{"<init>", "()V", nullptr, 0, $method(XMenuBarPeer$MappingData, init$, void)},
		{"getDesiredHeight", "()I", nullptr, $PUBLIC, $virtualMethod(XMenuBarPeer$MappingData, getDesiredHeight, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XMenuBarPeer$MappingData", "sun.awt.X11.XMenuBarPeer", "MappingData", $STATIC},
		{"sun.awt.X11.XBaseMenuWindow$MappingData", "sun.awt.X11.XBaseMenuWindow", "MappingData", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XMenuBarPeer$MappingData",
		"sun.awt.X11.XBaseMenuWindow$MappingData",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XMenuBarPeer"
	};
	$loadClass(XMenuBarPeer$MappingData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMenuBarPeer$MappingData);
	});
	return class$;
}

$Class* XMenuBarPeer$MappingData::class$ = nullptr;

		} // X11
	} // awt
} // sun