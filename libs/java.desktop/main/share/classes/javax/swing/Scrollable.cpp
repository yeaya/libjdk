#include <javax/swing/Scrollable.h>

#include <java/awt/Dimension.h>
#include <java/awt/Rectangle.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _Scrollable_MethodInfo_[] = {
	{"getPreferredScrollableViewportSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scrollable, getPreferredScrollableViewportSize, $Dimension*)},
	{"getScrollableBlockIncrement", "(Ljava/awt/Rectangle;II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scrollable, getScrollableBlockIncrement, int32_t, $Rectangle*, int32_t, int32_t)},
	{"getScrollableTracksViewportHeight", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scrollable, getScrollableTracksViewportHeight, bool)},
	{"getScrollableTracksViewportWidth", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scrollable, getScrollableTracksViewportWidth, bool)},
	{"getScrollableUnitIncrement", "(Ljava/awt/Rectangle;II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scrollable, getScrollableUnitIncrement, int32_t, $Rectangle*, int32_t, int32_t)},
	{}
};

$ClassInfo _Scrollable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.Scrollable",
	nullptr,
	nullptr,
	nullptr,
	_Scrollable_MethodInfo_
};

$Object* allocate$Scrollable($Class* clazz) {
	return $of($alloc(Scrollable));
}

$Class* Scrollable::load$($String* name, bool initialize) {
	$loadClass(Scrollable, name, initialize, &_Scrollable_ClassInfo_, allocate$Scrollable);
	return class$;
}

$Class* Scrollable::class$ = nullptr;

	} // swing
} // javax