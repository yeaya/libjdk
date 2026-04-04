#include <javax/swing/text/html/ImageView$ImageLabelView.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Shape.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/GlyphView$GlyphPainter.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/ImageView.h>
#include <javax/swing/text/html/InlineView.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $GlyphView$GlyphPainter = ::javax::swing::text::GlyphView$GlyphPainter;
using $Segment = ::javax::swing::text::Segment;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $View = ::javax::swing::text::View;
using $ImageView = ::javax::swing::text::html::ImageView;
using $InlineView = ::javax::swing::text::html::InlineView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void ImageView$ImageLabelView::init$($ImageView* this$0, $Element* e, $String* text) {
	$set(this, this$0, this$0);
	$InlineView::init$(e);
	reset(text);
}

void ImageView$ImageLabelView::reset($String* text) {
	$var($chars, var$0, $nc(text)->toCharArray());
	$set(this, segment, $new($Segment, var$0, 0, text->length()));
}

void ImageView$ImageLabelView::paint($Graphics* g, $Shape* a) {
	$useLocalObjectStack();
	$var($GlyphView$GlyphPainter, painter, getGlyphPainter());
	if (painter != nullptr) {
		$nc(g)->setColor($(getForeground()));
		int32_t var$0 = getStartOffset();
		painter->paint(this, g, a, var$0, getEndOffset());
	}
}

$Segment* ImageView$ImageLabelView::getText(int32_t p0, int32_t p1) {
	if (p0 < 0 || p1 > $nc($nc(this->segment)->array)->length) {
		$throwNew($RuntimeException, "ImageLabelView: Stale view"_s);
	}
	$nc(this->segment)->offset = p0;
	this->segment->count = p1 - p0;
	return this->segment;
}

int32_t ImageView$ImageLabelView::getStartOffset() {
	return 0;
}

int32_t ImageView$ImageLabelView::getEndOffset() {
	return $nc($nc(this->segment)->array)->length;
}

$View* ImageView$ImageLabelView::breakView(int32_t axis, int32_t p0, float pos, float len) {
	return this;
}

$Color* ImageView$ImageLabelView::getForeground() {
	$useLocalObjectStack();
	$var($View, parent, nullptr);
	if (this->fg == nullptr && ($assign(parent, getParent())) != nullptr) {
		$var($Document, doc, getDocument());
		$var($AttributeSet, attr, $nc(parent)->getAttributes());
		if (attr != nullptr && ($instanceOf($StyledDocument, doc))) {
			$set(this, fg, $cast($StyledDocument, doc)->getForeground(attr));
		}
	}
	return this->fg;
}

ImageView$ImageLabelView::ImageView$ImageLabelView() {
}

$Class* ImageView$ImageLabelView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/ImageView;", nullptr, $FINAL | $SYNTHETIC, $field(ImageView$ImageLabelView, this$0)},
		{"segment", "Ljavax/swing/text/Segment;", nullptr, $PRIVATE, $field(ImageView$ImageLabelView, segment)},
		{"fg", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ImageView$ImageLabelView, fg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/ImageView;Ljavax/swing/text/Element;Ljava/lang/String;)V", nullptr, 0, $method(ImageView$ImageLabelView, init$, void, $ImageView*, $Element*, $String*)},
		{"breakView", "(IIFF)Ljavax/swing/text/View;", nullptr, $PUBLIC, $virtualMethod(ImageView$ImageLabelView, breakView, $View*, int32_t, int32_t, float, float)},
		{"getEndOffset", "()I", nullptr, $PUBLIC, $virtualMethod(ImageView$ImageLabelView, getEndOffset, int32_t)},
		{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(ImageView$ImageLabelView, getForeground, $Color*)},
		{"getStartOffset", "()I", nullptr, $PUBLIC, $virtualMethod(ImageView$ImageLabelView, getStartOffset, int32_t)},
		{"getText", "(II)Ljavax/swing/text/Segment;", nullptr, $PUBLIC, $virtualMethod(ImageView$ImageLabelView, getText, $Segment*, int32_t, int32_t)},
		{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC, $virtualMethod(ImageView$ImageLabelView, paint, void, $Graphics*, $Shape*)},
		{"reset", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ImageView$ImageLabelView, reset, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.ImageView$ImageLabelView", "javax.swing.text.html.ImageView", "ImageLabelView", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.ImageView$ImageLabelView",
		"javax.swing.text.html.InlineView",
		nullptr,
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
	$loadClass(ImageView$ImageLabelView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ImageView$ImageLabelView));
	});
	return class$;
}

$Class* ImageView$ImageLabelView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax