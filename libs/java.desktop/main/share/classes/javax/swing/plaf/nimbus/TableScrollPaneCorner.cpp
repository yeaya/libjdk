#include <javax/swing/plaf/nimbus/TableScrollPaneCorner.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/Painter.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $Painter = ::javax::swing::Painter;
using $UIManager = ::javax::swing::UIManager;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$String* TableScrollPaneCorner::toString() {
	return this->$JComponent::toString();
}

int32_t TableScrollPaneCorner::hashCode() {
	return this->$JComponent::hashCode();
}

bool TableScrollPaneCorner::equals(Object$* arg0) {
	return this->$JComponent::equals(arg0);
}

$Object* TableScrollPaneCorner::clone() {
	return this->$JComponent::clone();
}

void TableScrollPaneCorner::finalize() {
	this->$JComponent::finalize();
}

void TableScrollPaneCorner::init$() {
	$JComponent::init$();
}

void TableScrollPaneCorner::paintComponent($Graphics* g) {
	$useLocalObjectStack();
	$var($Painter, painter, $cast($Painter, $UIManager::get("TableHeader:\"TableHeader.renderer\"[Enabled].backgroundPainter"_s)));
	if (painter != nullptr) {
		if ($instanceOf($Graphics2D, g)) {
			int32_t var$0 = getWidth() + 1;
			painter->paint($cast($Graphics2D, g), this, var$0, getHeight());
		} else {
			int32_t var$1 = getWidth();
			$var($BufferedImage, img, $new($BufferedImage, var$1, getHeight(), $BufferedImage::TYPE_INT_ARGB));
			$var($Graphics2D, g2, $cast($Graphics2D, img->getGraphics()));
			int32_t var$2 = getWidth() + 1;
			painter->paint(g2, this, var$2, getHeight());
			$nc(g2)->dispose();
			$nc(g)->drawImage(img, 0, 0, nullptr);
			$assign(img, nullptr);
		}
	}
}

TableScrollPaneCorner::TableScrollPaneCorner() {
}

$Class* TableScrollPaneCorner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(TableScrollPaneCorner, init$, void)},
		{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(TableScrollPaneCorner, paintComponent, void, $Graphics*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.TableScrollPaneCorner",
		"javax.swing.JComponent",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$
	};
	$loadClass(TableScrollPaneCorner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TableScrollPaneCorner));
	});
	return class$;
}

$Class* TableScrollPaneCorner::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax