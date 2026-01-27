#include <sun/awt/AWTAccessor$ComponentAccessor.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Font.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/image/BufferStrategy.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/security/AccessControlContext.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/RequestFocusController.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Font = ::java::awt::Font;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $BufferStrategy = ::java::awt::image::BufferStrategy;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AppContext = ::sun::awt::AppContext;
using $RequestFocusController = ::sun::awt::RequestFocusController;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$ComponentAccessor_MethodInfo_[] = {
	{"canBeFocusOwner", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, canBeFocusOwner, bool, $Component*)},
	{"createBufferStrategy", "(Ljava/awt/Component;ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, createBufferStrategy, void, $Component*, int32_t, $BufferCapabilities*), "java.awt.AWTException"},
	{"getAccessControlContext", "(Ljava/awt/Component;)Ljava/security/AccessControlContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getAccessControlContext, $AccessControlContext*, $Component*)},
	{"getAppContext", "(Ljava/awt/Component;)Lsun/awt/AppContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getAppContext, $AppContext*, $Component*)},
	{"getBackground", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getBackground, $Color*, $Component*)},
	{"getBackgroundEraseDisabled", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getBackgroundEraseDisabled, bool, $Component*)},
	{"getBounds", "(Ljava/awt/Component;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getBounds, $Rectangle*, $Component*)},
	{"getBufferStrategy", "(Ljava/awt/Component;)Ljava/awt/image/BufferStrategy;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getBufferStrategy, $BufferStrategy*, $Component*)},
	{"getCursor", "(Ljava/awt/Component;)Ljava/awt/Cursor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getCursor, $Cursor*, $Component*)},
	{"getFont", "(Ljava/awt/Component;)Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getFont, $Font*, $Component*)},
	{"getForeground", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getForeground, $Color*, $Component*)},
	{"getHeight", "(Ljava/awt/Component;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getHeight, int32_t, $Component*)},
	{"getIgnoreRepaint", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getIgnoreRepaint, bool, $Component*)},
	{"getLocation", "(Ljava/awt/Component;)Ljava/awt/Point;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getLocation, $Point*, $Component*)},
	{"getParent", "(Ljava/awt/Component;)Ljava/awt/Container;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getParent, $Container*, $Component*)},
	{"getPeer", "(Ljava/awt/Component;)Ljava/awt/peer/ComponentPeer;", "<T::Ljava/awt/peer/ComponentPeer;>(Ljava/awt/Component;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getPeer, $ComponentPeer*, $Component*)},
	{"getWidth", "(Ljava/awt/Component;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getWidth, int32_t, $Component*)},
	{"getX", "(Ljava/awt/Component;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getX, int32_t, $Component*)},
	{"getY", "(Ljava/awt/Component;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, getY, int32_t, $Component*)},
	{"isDisplayable", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, isDisplayable, bool, $Component*)},
	{"isEnabled", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, isEnabled, bool, $Component*)},
	{"isLightweight", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, isLightweight, bool, $Component*)},
	{"isVisible", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, isVisible, bool, $Component*)},
	{"processEvent", "(Ljava/awt/Component;Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, processEvent, void, $Component*, $AWTEvent*)},
	{"requestFocus", "(Ljava/awt/Component;Ljava/awt/event/FocusEvent$Cause;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, requestFocus, void, $Component*, $FocusEvent$Cause*)},
	{"revalidateSynchronously", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, revalidateSynchronously, void, $Component*)},
	{"setAppContext", "(Ljava/awt/Component;Lsun/awt/AppContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, setAppContext, void, $Component*, $AppContext*)},
	{"setBackground", "(Ljava/awt/Component;Ljava/awt/Color;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, setBackground, void, $Component*, $Color*)},
	{"setBackgroundEraseDisabled", "(Ljava/awt/Component;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, setBackgroundEraseDisabled, void, $Component*, bool)},
	{"setGraphicsConfiguration", "(Ljava/awt/Component;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, setGraphicsConfiguration, void, $Component*, $GraphicsConfiguration*)},
	{"setLocation", "(Ljava/awt/Component;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, setLocation, void, $Component*, int32_t, int32_t)},
	{"setParent", "(Ljava/awt/Component;Ljava/awt/Container;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, setParent, void, $Component*, $Container*)},
	{"setPeer", "(Ljava/awt/Component;Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, setPeer, void, $Component*, $ComponentPeer*)},
	{"setRequestFocusController", "(Lsun/awt/RequestFocusController;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, setRequestFocusController, void, $RequestFocusController*)},
	{"setSize", "(Ljava/awt/Component;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ComponentAccessor, setSize, void, $Component*, int32_t, int32_t)},
	{}
};

$InnerClassInfo _AWTAccessor$ComponentAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$ComponentAccessor", "sun.awt.AWTAccessor", "ComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$ComponentAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$ComponentAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$ComponentAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$ComponentAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$ComponentAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$ComponentAccessor));
}

$Class* AWTAccessor$ComponentAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$ComponentAccessor, name, initialize, &_AWTAccessor$ComponentAccessor_ClassInfo_, allocate$AWTAccessor$ComponentAccessor);
	return class$;
}

$Class* AWTAccessor$ComponentAccessor::class$ = nullptr;

	} // awt
} // sun