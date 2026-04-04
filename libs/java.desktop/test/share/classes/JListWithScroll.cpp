#include <JListWithScroll.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/lang/Math.h>
#include <javax/swing/JList.h>
#include <javax/swing/JViewport.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;
using $JViewport = ::javax::swing::JViewport;

$String* JListWithScroll::toString() {
	 return this->$JList::toString();
}

int32_t JListWithScroll::hashCode() {
	 return this->$JList::hashCode();
}

bool JListWithScroll::equals(Object$* arg0) {
	 return this->$JList::equals(arg0);
}

$Object* JListWithScroll::clone() {
	 return this->$JList::clone();
}

void JListWithScroll::finalize() {
	this->$JList::finalize();
}

void JListWithScroll::init$($ObjectArray* listData) {
	$JList::init$(listData);
	$set(this, scrollInsets, $new($Insets, 50, 50, 50, 50));
}

$Insets* JListWithScroll::getAutoscrollInsets() {
	return this->scrollInsets;
}

void JListWithScroll::autoscroll($Point* cursorLoc) {
	$useLocalObjectStack();
	$var($JViewport, viewport, getViewport());
	if (viewport == nullptr) {
		return;
	}
	$var($Point, viewPos, $nc(viewport)->getViewPosition());
	int32_t viewHeight = $nc($(viewport->getExtentSize()))->height;
	int32_t viewWidth = $nc($(viewport->getExtentSize()))->width;
	if (($nc(cursorLoc)->y - $nc(viewPos)->y) < $nc(this->scrollInsets)->top) {
		viewport->setViewPosition($$new($Point, viewPos->x, $Math::max(viewPos->y - this->scrollInsets->top, 0)));
	} else if (((viewPos->y + viewHeight) - cursorLoc->y) < this->scrollInsets->bottom) {
		viewport->setViewPosition($$new($Point, viewPos->x, $Math::min(viewPos->y + this->scrollInsets->bottom, this->getHeight() - viewHeight)));
	} else if ((cursorLoc->x - viewPos->x) < $nc(this->scrollInsets)->left) {
		viewport->setViewPosition($$new($Point, $Math::max(viewPos->x - this->scrollInsets->left, 0), viewPos->y));
	} else if (((viewPos->x + viewWidth) - cursorLoc->x) < this->scrollInsets->right) {
		viewport->setViewPosition($$new($Point, $Math::min(viewPos->x + this->scrollInsets->right, this->getWidth() - viewWidth), viewPos->y));
	}
}

$JViewport* JListWithScroll::getViewport() {
	$var($Component, curComp, this);
	while (!($instanceOf($JViewport, curComp)) && (curComp != nullptr)) {
		$assign(curComp, curComp->getParent());
	}
	if ($instanceOf($JViewport, curComp)) {
		return $cast($JViewport, curComp);
	} else {
		return nullptr;
	}
}

JListWithScroll::JListWithScroll() {
}

$Class* JListWithScroll::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"scrollInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(JListWithScroll, scrollInsets)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "([Ljava/lang/Object;)V", "([TE;)V", $PUBLIC, $method(JListWithScroll, init$, void, $ObjectArray*)},
		{"autoscroll", "(Ljava/awt/Point;)V", nullptr, $PUBLIC, $virtualMethod(JListWithScroll, autoscroll, void, $Point*)},
		{"getAutoscrollInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(JListWithScroll, getAutoscrollInsets, $Insets*)},
		{"getViewport", "()Ljavax/swing/JViewport;", nullptr, $PUBLIC, $virtualMethod(JListWithScroll, getViewport, $JViewport*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JListWithScroll",
		"javax.swing.JList",
		"java.awt.dnd.Autoscroll",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljavax/swing/JList<TE;>;Ljava/awt/dnd/Autoscroll;"
	};
	$loadClass(JListWithScroll, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JListWithScroll));
	});
	return class$;
}

$Class* JListWithScroll::class$ = nullptr;