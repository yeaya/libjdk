#include <FillPainter.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics2D.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Graphics2D = ::java::awt::Graphics2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

void FillPainter::init$($Color* c) {
	$set(this, color, c);
}

void FillPainter::paint($Graphics2D* g, $JComponent* object, int32_t width, int32_t height) {
	$nc(g)->setColor(this->color);
	g->fillRect(0, 0, width - 1, height - 1);
}

void FillPainter::paint($Graphics2D* g, Object$* object, int32_t width, int32_t height) {
	this->paint(g, $cast($JComponent, object), width, height);
}

FillPainter::FillPainter() {
}

$Class* FillPainter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"color", "Ljava/awt/Color;", nullptr, $PRIVATE | $FINAL, $field(FillPainter, color)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Color;)V", nullptr, 0, $method(FillPainter, init$, void, $Color*)},
		{"paint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II)V", nullptr, $PUBLIC, $virtualMethod(FillPainter, paint, void, $Graphics2D*, $JComponent*, int32_t, int32_t)},
		{"paint", "(Ljava/awt/Graphics2D;Ljava/lang/Object;II)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(FillPainter, paint, void, $Graphics2D*, Object$*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FillPainter",
		"java.lang.Object",
		"javax.swing.Painter",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljavax/swing/Painter<Ljavax/swing/JComponent;>;"
	};
	$loadClass(FillPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FillPainter);
	});
	return class$;
}

$Class* FillPainter::class$ = nullptr;