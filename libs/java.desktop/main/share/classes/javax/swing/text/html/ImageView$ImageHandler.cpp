#include <javax/swing/text/html/ImageView$ImageHandler.h>
#include <java/awt/Dimension.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/ImageView.h>
#include <jcpp.h>

#undef ABORT
#undef ALLBITS
#undef ERROR
#undef FRAMEBITS
#undef HEIGHT
#undef SOMEBITS
#undef WIDTH

using $Dimension = ::java::awt::Dimension;
using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $ImageView = ::javax::swing::text::html::ImageView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void ImageView$ImageHandler::init$($ImageView* this$0) {
	$set(this, this$0, this$0);
}

bool ImageView$ImageHandler::imageUpdate($Image* img, int32_t flags, int32_t x, int32_t y, int32_t newWidth, int32_t newHeight) {
	$useLocalObjectStack();
	if (img != this->this$0->image && img != this->this$0->disabledImage || this->this$0->image == nullptr || this->this$0->getParent() == nullptr) {
		return false;
	}
	if ((flags & ($ImageObserver::ABORT | $ImageObserver::ERROR)) != 0) {
		this->this$0->repaint(0);
		$synchronized(this->this$0) {
			if (this->this$0->image == img) {
				$set(this->this$0, image, nullptr);
				if ((this->this$0->state & 4) != 4) {
					this->this$0->width = 38;
				}
				if ((this->this$0->state & 8) != 8) {
					this->this$0->height = 38;
				}
			} else {
				$set(this->this$0, disabledImage, nullptr);
			}
			if ((this->this$0->state & 1) == 1) {
				return false;
			}
		}
		this->this$0->updateAltTextView();
		this->this$0->safePreferenceChanged();
		return false;
	}
	if (this->this$0->image == img) {
		int16_t changed = 0;
		$init($HTML$Attribute);
		if ((flags & $ImageObserver::HEIGHT) != 0 && !$$nc($$nc(this->this$0->getElement())->getAttributes())->isDefined($HTML$Attribute::HEIGHT)) {
			changed |= 1;
		}
		if ((flags & $ImageObserver::WIDTH) != 0 && !$$nc($$nc(this->this$0->getElement())->getAttributes())->isDefined($HTML$Attribute::WIDTH)) {
			changed |= 2;
		}
		if (((flags & $ImageObserver::HEIGHT) != 0) && ((flags & $ImageObserver::WIDTH) != 0)) {
			$var($Dimension, d, this->this$0->adjustWidthHeight(newWidth, newHeight));
			newWidth = $nc(d)->width;
			newHeight = d->height;
			changed |= 3;
		}
		$synchronized(this->this$0) {
			if ((changed & 1) == 1 && (this->this$0->state & 8) == 0) {
				this->this$0->height = newHeight;
			}
			if ((changed & 2) == 2 && (this->this$0->state & 4) == 0) {
				this->this$0->width = newWidth;
			}
			if ((this->this$0->state & 1) == 1) {
				return true;
			}
		}
		if (changed != 0) {
			this->this$0->safePreferenceChanged();
			return true;
		}
	}
	if ((flags & ($ImageObserver::FRAMEBITS | $ImageObserver::ALLBITS)) != 0) {
		this->this$0->repaint(0);
	} else if ((flags & $ImageObserver::SOMEBITS) != 0 && $ImageView::sIsInc) {
		this->this$0->repaint($ImageView::sIncRate);
	}
	return ((flags & $ImageObserver::ALLBITS) == 0);
}

ImageView$ImageHandler::ImageView$ImageHandler() {
}

$Class* ImageView$ImageHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/ImageView;", nullptr, $FINAL | $SYNTHETIC, $field(ImageView$ImageHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/ImageView;)V", nullptr, $PRIVATE, $method(ImageView$ImageHandler, init$, void, $ImageView*)},
		{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC, $virtualMethod(ImageView$ImageHandler, imageUpdate, bool, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.ImageView$ImageHandler", "javax.swing.text.html.ImageView", "ImageHandler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.ImageView$ImageHandler",
		"java.lang.Object",
		"java.awt.image.ImageObserver",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.ImageView"
	};
	$loadClass(ImageView$ImageHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageView$ImageHandler);
	});
	return class$;
}

$Class* ImageView$ImageHandler::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax