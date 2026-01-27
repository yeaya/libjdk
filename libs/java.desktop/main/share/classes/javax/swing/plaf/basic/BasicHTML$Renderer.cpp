#include <javax/swing/plaf/basic/BasicHTML$Renderer.h>

#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/lang/Error.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef X_AXIS
#undef Y_AXIS

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicHTML$Renderer_FieldInfo_[] = {
	{"width", "I", nullptr, $PRIVATE, $field(BasicHTML$Renderer, width)},
	{"view", "Ljavax/swing/text/View;", nullptr, $PRIVATE, $field(BasicHTML$Renderer, view)},
	{"factory", "Ljavax/swing/text/ViewFactory;", nullptr, $PRIVATE, $field(BasicHTML$Renderer, factory)},
	{"host", "Ljavax/swing/JComponent;", nullptr, $PRIVATE, $field(BasicHTML$Renderer, host)},
	{}
};

$MethodInfo _BasicHTML$Renderer_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComponent;Ljavax/swing/text/ViewFactory;Ljavax/swing/text/View;)V", nullptr, 0, $method(BasicHTML$Renderer, init$, void, $JComponent*, $ViewFactory*, $View*)},
	{"getAlignment", "(I)F", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, getAlignment, float, int32_t)},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, getAttributes, $AttributeSet*)},
	{"getContainer", "()Ljava/awt/Container;", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, getContainer, $Container*)},
	{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, getDocument, $Document*)},
	{"getElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, getElement, $Element*)},
	{"getEndOffset", "()I", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, getEndOffset, int32_t)},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, getMaximumSpan, float, int32_t)},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, getMinimumSpan, float, int32_t)},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, getPreferredSpan, float, int32_t)},
	{"getStartOffset", "()I", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, getStartOffset, int32_t)},
	{"getView", "(I)Ljavax/swing/text/View;", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, getView, $View*, int32_t)},
	{"getViewCount", "()I", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, getViewCount, int32_t)},
	{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, getViewFactory, $ViewFactory*)},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, modelToView, $Shape*, int32_t, $Shape*, $Position$Bias*), "javax.swing.text.BadLocationException"},
	{"modelToView", "(ILjavax/swing/text/Position$Bias;ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, modelToView, $Shape*, int32_t, $Position$Bias*, int32_t, $Position$Bias*, $Shape*), "javax.swing.text.BadLocationException"},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, paint, void, $Graphics*, $Shape*)},
	{"preferenceChanged", "(Ljavax/swing/text/View;ZZ)V", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, preferenceChanged, void, $View*, bool, bool)},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, setParent, void, $View*)},
	{"setSize", "(FF)V", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, setSize, void, float, float)},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, $virtualMethod(BasicHTML$Renderer, viewToModel, int32_t, float, float, $Shape*, $Position$BiasArray*)},
	{}
};

$InnerClassInfo _BasicHTML$Renderer_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicHTML$Renderer", "javax.swing.plaf.basic.BasicHTML", "Renderer", $STATIC},
	{}
};

$ClassInfo _BasicHTML$Renderer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicHTML$Renderer",
	"javax.swing.text.View",
	nullptr,
	_BasicHTML$Renderer_FieldInfo_,
	_BasicHTML$Renderer_MethodInfo_,
	nullptr,
	nullptr,
	_BasicHTML$Renderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicHTML"
};

$Object* allocate$BasicHTML$Renderer($Class* clazz) {
	return $of($alloc(BasicHTML$Renderer));
}

void BasicHTML$Renderer::init$($JComponent* c, $ViewFactory* f, $View* v) {
	$View::init$(nullptr);
	$set(this, host, c);
	$set(this, factory, f);
	$set(this, view, v);
	$nc(this->view)->setParent(this);
	float var$0 = $nc(this->view)->getPreferredSpan($View::X_AXIS);
	setSize(var$0, $nc(this->view)->getPreferredSpan($View::Y_AXIS));
}

$AttributeSet* BasicHTML$Renderer::getAttributes() {
	return nullptr;
}

float BasicHTML$Renderer::getPreferredSpan(int32_t axis) {
	if (axis == $View::X_AXIS) {
		return (float)this->width;
	}
	return $nc(this->view)->getPreferredSpan(axis);
}

float BasicHTML$Renderer::getMinimumSpan(int32_t axis) {
	return $nc(this->view)->getMinimumSpan(axis);
}

float BasicHTML$Renderer::getMaximumSpan(int32_t axis) {
	return (float)$Integer::MAX_VALUE;
}

void BasicHTML$Renderer::preferenceChanged($View* child, bool width, bool height) {
	$nc(this->host)->revalidate();
	$nc(this->host)->repaint();
}

float BasicHTML$Renderer::getAlignment(int32_t axis) {
	return $nc(this->view)->getAlignment(axis);
}

void BasicHTML$Renderer::paint($Graphics* g, $Shape* allocation) {
	$var($Rectangle, alloc, $nc(allocation)->getBounds());
	$nc(this->view)->setSize((float)$nc(alloc)->width, (float)alloc->height);
	$nc(this->view)->paint(g, allocation);
}

void BasicHTML$Renderer::setParent($View* parent) {
	$throwNew($Error, "Can\'t set parent on root view"_s);
}

int32_t BasicHTML$Renderer::getViewCount() {
	return 1;
}

$View* BasicHTML$Renderer::getView(int32_t n) {
	return this->view;
}

$Shape* BasicHTML$Renderer::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	return $nc(this->view)->modelToView(pos, a, b);
}

$Shape* BasicHTML$Renderer::modelToView(int32_t p0, $Position$Bias* b0, int32_t p1, $Position$Bias* b1, $Shape* a) {
	return $nc(this->view)->modelToView(p0, b0, p1, b1, a);
}

int32_t BasicHTML$Renderer::viewToModel(float x, float y, $Shape* a, $Position$BiasArray* bias) {
	return $nc(this->view)->viewToModel(x, y, a, bias);
}

$Document* BasicHTML$Renderer::getDocument() {
	return $nc(this->view)->getDocument();
}

int32_t BasicHTML$Renderer::getStartOffset() {
	return $nc(this->view)->getStartOffset();
}

int32_t BasicHTML$Renderer::getEndOffset() {
	return $nc(this->view)->getEndOffset();
}

$Element* BasicHTML$Renderer::getElement() {
	return $nc(this->view)->getElement();
}

void BasicHTML$Renderer::setSize(float width, float height) {
	this->width = $cast(int32_t, width);
	$nc(this->view)->setSize(width, height);
}

$Container* BasicHTML$Renderer::getContainer() {
	return this->host;
}

$ViewFactory* BasicHTML$Renderer::getViewFactory() {
	return this->factory;
}

BasicHTML$Renderer::BasicHTML$Renderer() {
}

$Class* BasicHTML$Renderer::load$($String* name, bool initialize) {
	$loadClass(BasicHTML$Renderer, name, initialize, &_BasicHTML$Renderer_ClassInfo_, allocate$BasicHTML$Renderer);
	return class$;
}

$Class* BasicHTML$Renderer::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax