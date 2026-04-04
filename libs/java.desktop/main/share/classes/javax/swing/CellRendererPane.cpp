#include <javax/swing/CellRendererPane.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/io/ObjectOutputStream.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/CellRendererPane$AccessibleCellRendererPane.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $CellRendererPane$AccessibleCellRendererPane = ::javax::swing::CellRendererPane$AccessibleCellRendererPane;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

$String* CellRendererPane::toString() {
	 return this->$Container::toString();
}

int32_t CellRendererPane::hashCode() {
	 return this->$Container::hashCode();
}

bool CellRendererPane::equals(Object$* arg0) {
	 return this->$Container::equals(arg0);
}

$Object* CellRendererPane::clone() {
	 return this->$Container::clone();
}

void CellRendererPane::finalize() {
	this->$Container::finalize();
}

void CellRendererPane::init$() {
	$Container::init$();
	$set(this, accessibleContext, nullptr);
	setLayout(nullptr);
	setVisible(false);
}

void CellRendererPane::invalidate() {
}

void CellRendererPane::paint($Graphics* g) {
}

void CellRendererPane::update($Graphics* g) {
}

void CellRendererPane::addImpl($Component* x, Object$* constraints, int32_t index) {
	if ($equals($nc(x)->getParent(), this)) {
		return;
	} else {
		$Container::addImpl(x, constraints, index);
	}
}

void CellRendererPane::paintComponent($Graphics* g, $Component* c, $Container* p, int32_t x, int32_t y, int32_t w, int32_t h, bool shouldValidate) {
	$useLocalObjectStack();
	if (c == nullptr) {
		if (p != nullptr) {
			$var($Color, oldColor, $nc(g)->getColor());
			g->setColor($(p->getBackground()));
			g->fillRect(x, y, w, h);
			g->setColor(oldColor);
		}
		return;
	}
	if (!$equals($nc(c)->getParent(), this)) {
		this->add(c);
	}
	c->setBounds(x, y, w, h);
	if (shouldValidate) {
		c->validate();
	}
	bool wasDoubleBuffered = false;
	if (($instanceOf($JComponent, c)) && $cast($JComponent, c)->isDoubleBuffered()) {
		wasDoubleBuffered = true;
		$cast($JComponent, c)->setDoubleBuffered(false);
	}
	$var($Graphics, cg, $nc(g)->create(x, y, w, h));
	$var($Throwable, var$0, nullptr);
	try {
		c->paint(cg);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(cg)->dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (wasDoubleBuffered && ($instanceOf($JComponent, c))) {
		$cast($JComponent, c)->setDoubleBuffered(true);
	}
	c->setBounds(-w, -h, 0, 0);
}

void CellRendererPane::paintComponent($Graphics* g, $Component* c, $Container* p, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintComponent(g, c, p, x, y, w, h, false);
}

void CellRendererPane::paintComponent($Graphics* g, $Component* c, $Container* p, $Rectangle* r) {
	paintComponent(g, c, p, $nc(r)->x, $nc(r)->y, $nc(r)->width, $nc(r)->height);
}

void CellRendererPane::writeObject($ObjectOutputStream* s) {
	removeAll();
	$nc(s)->defaultWriteObject();
}

$AccessibleContext* CellRendererPane::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($CellRendererPane$AccessibleCellRendererPane, this));
	}
	return this->accessibleContext;
}

CellRendererPane::CellRendererPane() {
}

$Class* CellRendererPane::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PROTECTED, $field(CellRendererPane, accessibleContext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(CellRendererPane, init$, void)},
		{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED, $virtualMethod(CellRendererPane, addImpl, void, $Component*, Object$*, int32_t)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(CellRendererPane, getAccessibleContext, $AccessibleContext*)},
		{"invalidate", "()V", nullptr, $PUBLIC, $virtualMethod(CellRendererPane, invalidate, void)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(CellRendererPane, paint, void, $Graphics*)},
		{"paintComponent", "(Ljava/awt/Graphics;Ljava/awt/Component;Ljava/awt/Container;IIIIZ)V", nullptr, $PUBLIC, $virtualMethod(CellRendererPane, paintComponent, void, $Graphics*, $Component*, $Container*, int32_t, int32_t, int32_t, int32_t, bool)},
		{"paintComponent", "(Ljava/awt/Graphics;Ljava/awt/Component;Ljava/awt/Container;IIII)V", nullptr, $PUBLIC, $virtualMethod(CellRendererPane, paintComponent, void, $Graphics*, $Component*, $Container*, int32_t, int32_t, int32_t, int32_t)},
		{"paintComponent", "(Ljava/awt/Graphics;Ljava/awt/Component;Ljava/awt/Container;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $virtualMethod(CellRendererPane, paintComponent, void, $Graphics*, $Component*, $Container*, $Rectangle*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"update", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(CellRendererPane, update, void, $Graphics*)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(CellRendererPane, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.CellRendererPane$AccessibleCellRendererPane", "javax.swing.CellRendererPane", "AccessibleCellRendererPane", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.CellRendererPane",
		"java.awt.Container",
		"javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.CellRendererPane$AccessibleCellRendererPane"
	};
	$loadClass(CellRendererPane, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CellRendererPane));
	});
	return class$;
}

$Class* CellRendererPane::class$ = nullptr;

	} // swing
} // javax