#include <javax/swing/border/CompoundBorder.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;

namespace javax {
	namespace swing {
		namespace border {

void CompoundBorder::init$() {
	$AbstractBorder::init$();
	$set(this, outsideBorder, nullptr);
	$set(this, insideBorder, nullptr);
}

void CompoundBorder::init$($Border* outsideBorder, $Border* insideBorder) {
	$AbstractBorder::init$();
	$set(this, outsideBorder, outsideBorder);
	$set(this, insideBorder, insideBorder);
}

bool CompoundBorder::isBorderOpaque() {
	bool var$0 = this->outsideBorder == nullptr || this->outsideBorder->isBorderOpaque();
	return var$0 && (this->insideBorder == nullptr || this->insideBorder->isBorderOpaque());
}

void CompoundBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Insets, nextInsets, nullptr);
	int32_t px = 0;
	int32_t py = 0;
	int32_t pw = 0;
	int32_t ph = 0;
	px = x;
	py = y;
	pw = width;
	ph = height;
	if (this->outsideBorder != nullptr) {
		this->outsideBorder->paintBorder(c, g, px, py, pw, ph);
		$assign(nextInsets, $nc(this->outsideBorder)->getBorderInsets(c));
		px += $nc(nextInsets)->left;
		py += nextInsets->top;
		pw = pw - nextInsets->right - nextInsets->left;
		ph = ph - nextInsets->bottom - nextInsets->top;
	}
	if (this->insideBorder != nullptr) {
		this->insideBorder->paintBorder(c, g, px, py, pw, ph);
	}
}

$Insets* CompoundBorder::getBorderInsets($Component* c, $Insets* insets) {
	$var($Insets, nextInsets, nullptr);
	$nc(insets)->top = ($nc(insets)->left = ($nc(insets)->right = ($nc(insets)->bottom = 0)));
	if (this->outsideBorder != nullptr) {
		$assign(nextInsets, this->outsideBorder->getBorderInsets(c));
		insets->top += $nc(nextInsets)->top;
		insets->left += nextInsets->left;
		insets->right += nextInsets->right;
		insets->bottom += nextInsets->bottom;
	}
	if (this->insideBorder != nullptr) {
		$assign(nextInsets, this->insideBorder->getBorderInsets(c));
		insets->top += $nc(nextInsets)->top;
		insets->left += nextInsets->left;
		insets->right += nextInsets->right;
		insets->bottom += nextInsets->bottom;
	}
	return insets;
}

$Border* CompoundBorder::getOutsideBorder() {
	return this->outsideBorder;
}

$Border* CompoundBorder::getInsideBorder() {
	return this->insideBorder;
}

CompoundBorder::CompoundBorder() {
}

$Class* CompoundBorder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"outsideBorder", "Ljavax/swing/border/Border;", nullptr, $PROTECTED, $field(CompoundBorder, outsideBorder)},
		{"insideBorder", "Ljavax/swing/border/Border;", nullptr, $PROTECTED, $field(CompoundBorder, insideBorder)},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "outsideBorder"},
		{'s', "insideBorder"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$1$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$1[] = {
		{"Ljava/beans/ConstructorProperties;", init$methodAnnotations$$$1$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CompoundBorder, init$, void)},
		{"<init>", "(Ljavax/swing/border/Border;Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $method(CompoundBorder, init$, void, $Border*, $Border*), nullptr, nullptr, init$methodAnnotations$$$1},
		{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(CompoundBorder, getBorderInsets, $Insets*, $Component*, $Insets*)},
		{"getInsideBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC, $virtualMethod(CompoundBorder, getInsideBorder, $Border*)},
		{"getOutsideBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC, $virtualMethod(CompoundBorder, getOutsideBorder, $Border*)},
		{"isBorderOpaque", "()Z", nullptr, $PUBLIC, $virtualMethod(CompoundBorder, isBorderOpaque, bool)},
		{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(CompoundBorder, paintBorder, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.border.CompoundBorder",
		"javax.swing.border.AbstractBorder",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CompoundBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CompoundBorder));
	});
	return class$;
}

$Class* CompoundBorder::class$ = nullptr;

		} // border
	} // swing
} // javax