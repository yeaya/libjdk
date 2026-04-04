#include <sun/awt/X11/XMenuItemPeer$TextMetrics.h>
#include <java/awt/Dimension.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <sun/awt/X11/XMenuItemPeer.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
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

void XMenuItemPeer$TextMetrics::init$($Dimension* textDimension, int32_t shortcutWidth, int32_t textBaseline) {
	$set(this, textDimension, textDimension);
	this->shortcutWidth = shortcutWidth;
	this->textBaseline = textBaseline;
}

$Object* XMenuItemPeer$TextMetrics::clone() {
	try {
		return $Cloneable::clone();
	} catch ($CloneNotSupportedException& ex) {
		$throwNew($InternalError, ex);
	}
	$shouldNotReachHere();
}

$Dimension* XMenuItemPeer$TextMetrics::getTextDimension() {
	return this->textDimension;
}

int32_t XMenuItemPeer$TextMetrics::getShortcutWidth() {
	return this->shortcutWidth;
}

int32_t XMenuItemPeer$TextMetrics::getTextBaseline() {
	return this->textBaseline;
}

XMenuItemPeer$TextMetrics::XMenuItemPeer$TextMetrics() {
}

$Class* XMenuItemPeer$TextMetrics::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"textDimension", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(XMenuItemPeer$TextMetrics, textDimension)},
		{"shortcutWidth", "I", nullptr, $PRIVATE, $field(XMenuItemPeer$TextMetrics, shortcutWidth)},
		{"textBaseline", "I", nullptr, $PRIVATE, $field(XMenuItemPeer$TextMetrics, textBaseline)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Dimension;II)V", nullptr, 0, $method(XMenuItemPeer$TextMetrics, init$, void, $Dimension*, int32_t, int32_t)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMenuItemPeer$TextMetrics, clone, $Object*)},
		{"getShortcutWidth", "()I", nullptr, 0, $virtualMethod(XMenuItemPeer$TextMetrics, getShortcutWidth, int32_t)},
		{"getTextBaseline", "()I", nullptr, 0, $virtualMethod(XMenuItemPeer$TextMetrics, getTextBaseline, int32_t)},
		{"getTextDimension", "()Ljava/awt/Dimension;", nullptr, 0, $virtualMethod(XMenuItemPeer$TextMetrics, getTextDimension, $Dimension*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XMenuItemPeer$TextMetrics", "sun.awt.X11.XMenuItemPeer", "TextMetrics", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XMenuItemPeer$TextMetrics",
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
		"sun.awt.X11.XMenuItemPeer"
	};
	$loadClass(XMenuItemPeer$TextMetrics, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMenuItemPeer$TextMetrics);
	});
	return class$;
}

$Class* XMenuItemPeer$TextMetrics::class$ = nullptr;

		} // X11
	} // awt
} // sun