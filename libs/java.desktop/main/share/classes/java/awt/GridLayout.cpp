#include <java/awt/GridLayout.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

int32_t GridLayout::hashCode() {
	 return this->$LayoutManager::hashCode();
}

bool GridLayout::equals(Object$* arg0) {
	 return this->$LayoutManager::equals(arg0);
}

$Object* GridLayout::clone() {
	 return this->$LayoutManager::clone();
}

void GridLayout::finalize() {
	this->$LayoutManager::finalize();
}

void GridLayout::init$() {
	GridLayout::init$(1, 0, 0, 0);
}

void GridLayout::init$(int32_t rows, int32_t cols) {
	GridLayout::init$(rows, cols, 0, 0);
}

void GridLayout::init$(int32_t rows, int32_t cols, int32_t hgap, int32_t vgap) {
	if ((rows == 0) && (cols == 0)) {
		$throwNew($IllegalArgumentException, "rows and cols cannot both be zero"_s);
	}
	this->rows = rows;
	this->cols = cols;
	this->hgap = hgap;
	this->vgap = vgap;
}

int32_t GridLayout::getRows() {
	return this->rows;
}

void GridLayout::setRows(int32_t rows) {
	if ((rows == 0) && (this->cols == 0)) {
		$throwNew($IllegalArgumentException, "rows and cols cannot both be zero"_s);
	}
	this->rows = rows;
}

int32_t GridLayout::getColumns() {
	return this->cols;
}

void GridLayout::setColumns(int32_t cols) {
	if ((cols == 0) && (this->rows == 0)) {
		$throwNew($IllegalArgumentException, "rows and cols cannot both be zero"_s);
	}
	this->cols = cols;
}

int32_t GridLayout::getHgap() {
	return this->hgap;
}

void GridLayout::setHgap(int32_t hgap) {
	this->hgap = hgap;
}

int32_t GridLayout::getVgap() {
	return this->vgap;
}

void GridLayout::setVgap(int32_t vgap) {
	this->vgap = vgap;
}

void GridLayout::addLayoutComponent($String* name, $Component* comp) {
}

void GridLayout::removeLayoutComponent($Component* comp) {
}

$Dimension* GridLayout::preferredLayoutSize($Container* parent) {
	$useLocalObjectStack();
	$synchronized($nc(parent)->getTreeLock()) {
		$var($Insets, insets, parent->getInsets());
		int32_t ncomponents = parent->getComponentCount();
		int32_t nrows = this->rows;
		int32_t ncols = this->cols;
		if (nrows > 0) {
			ncols = $div((ncomponents + nrows - 1), nrows);
		} else {
			nrows = $div((ncomponents + ncols - 1), ncols);
		}
		int32_t w = 0;
		int32_t h = 0;
		for (int32_t i = 0; i < ncomponents; ++i) {
			$var($Component, comp, parent->getComponent(i));
			$var($Dimension, d, $nc(comp)->getPreferredSize());
			if (w < $nc(d)->width) {
				w = d->width;
			}
			if (h < d->height) {
				h = d->height;
			}
		}
		return $new($Dimension, $nc(insets)->left + $nc(insets)->right + ncols * w + (ncols - 1) * this->hgap, $nc(insets)->top + $nc(insets)->bottom + nrows * h + (nrows - 1) * this->vgap);
	}
}

$Dimension* GridLayout::minimumLayoutSize($Container* parent) {
	$useLocalObjectStack();
	$synchronized($nc(parent)->getTreeLock()) {
		$var($Insets, insets, parent->getInsets());
		int32_t ncomponents = parent->getComponentCount();
		int32_t nrows = this->rows;
		int32_t ncols = this->cols;
		if (nrows > 0) {
			ncols = $div((ncomponents + nrows - 1), nrows);
		} else {
			nrows = $div((ncomponents + ncols - 1), ncols);
		}
		int32_t w = 0;
		int32_t h = 0;
		for (int32_t i = 0; i < ncomponents; ++i) {
			$var($Component, comp, parent->getComponent(i));
			$var($Dimension, d, $nc(comp)->getMinimumSize());
			if (w < $nc(d)->width) {
				w = d->width;
			}
			if (h < d->height) {
				h = d->height;
			}
		}
		return $new($Dimension, $nc(insets)->left + $nc(insets)->right + ncols * w + (ncols - 1) * this->hgap, $nc(insets)->top + $nc(insets)->bottom + nrows * h + (nrows - 1) * this->vgap);
	}
}

void GridLayout::layoutContainer($Container* parent) {
	$useLocalObjectStack();
	$synchronized($nc(parent)->getTreeLock()) {
		$var($Insets, insets, parent->getInsets());
		int32_t ncomponents = parent->getComponentCount();
		int32_t nrows = this->rows;
		int32_t ncols = this->cols;
		bool ltr = $$nc(parent->getComponentOrientation())->isLeftToRight();
		if (ncomponents == 0) {
			return;
		}
		if (nrows > 0) {
			ncols = $div((ncomponents + nrows - 1), nrows);
		} else {
			nrows = $div((ncomponents + ncols - 1), ncols);
		}
		int32_t totalGapsWidth = (ncols - 1) * this->hgap;
		int32_t widthWOInsets = parent->width - ($nc(insets)->left + $nc(insets)->right);
		int32_t widthOnComponent = $div((widthWOInsets - totalGapsWidth), ncols);
		int32_t extraWidthAvailable = (widthWOInsets - (widthOnComponent * ncols + totalGapsWidth)) / 2;
		int32_t totalGapsHeight = (nrows - 1) * this->vgap;
		int32_t heightWOInsets = parent->height - (insets->top + insets->bottom);
		int32_t heightOnComponent = $div((heightWOInsets - totalGapsHeight), nrows);
		int32_t extraHeightAvailable = (heightWOInsets - (heightOnComponent * nrows + totalGapsHeight)) / 2;
		if (ltr) {
			for (int32_t c = 0, x = insets->left + extraWidthAvailable; c < ncols; ++c, x += widthOnComponent + this->hgap) {
				for (int32_t r = 0, y = insets->top + extraHeightAvailable; r < nrows; ++r, y += heightOnComponent + this->vgap) {
					int32_t i = r * ncols + c;
					if (i < ncomponents) {
						$$nc(parent->getComponent(i))->setBounds(x, y, widthOnComponent, heightOnComponent);
					}
				}
			}
		} else {
			for (int32_t c = 0, x = (parent->width - insets->right - widthOnComponent) - extraWidthAvailable; c < ncols; ++c, x -= widthOnComponent + this->hgap) {
				for (int32_t r = 0, y = insets->top + extraHeightAvailable; r < nrows; ++r, y += heightOnComponent + this->vgap) {
					int32_t i = r * ncols + c;
					if (i < ncomponents) {
						$$nc(parent->getComponent(i))->setBounds(x, y, widthOnComponent, heightOnComponent);
					}
				}
			}
		}
	}
}

$String* GridLayout::toString() {
	$useLocalObjectStack();
	return $str({$($of(this)->getClass()->getName()), "[hgap="_s, $$str(this->hgap), ",vgap="_s, $$str(this->vgap), ",rows="_s, $$str(this->rows), ",cols="_s, $$str(this->cols), "]"_s});
}

GridLayout::GridLayout() {
}

$Class* GridLayout::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GridLayout, serialVersionUID)},
		{"hgap", "I", nullptr, 0, $field(GridLayout, hgap)},
		{"vgap", "I", nullptr, 0, $field(GridLayout, vgap)},
		{"rows", "I", nullptr, 0, $field(GridLayout, rows)},
		{"cols", "I", nullptr, 0, $field(GridLayout, cols)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(GridLayout, init$, void)},
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(GridLayout, init$, void, int32_t, int32_t)},
		{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(GridLayout, init$, void, int32_t, int32_t, int32_t, int32_t)},
		{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(GridLayout, addLayoutComponent, void, $String*, $Component*)},
		{"getColumns", "()I", nullptr, $PUBLIC, $virtualMethod(GridLayout, getColumns, int32_t)},
		{"getHgap", "()I", nullptr, $PUBLIC, $virtualMethod(GridLayout, getHgap, int32_t)},
		{"getRows", "()I", nullptr, $PUBLIC, $virtualMethod(GridLayout, getRows, int32_t)},
		{"getVgap", "()I", nullptr, $PUBLIC, $virtualMethod(GridLayout, getVgap, int32_t)},
		{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(GridLayout, layoutContainer, void, $Container*)},
		{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(GridLayout, minimumLayoutSize, $Dimension*, $Container*)},
		{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(GridLayout, preferredLayoutSize, $Dimension*, $Container*)},
		{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(GridLayout, removeLayoutComponent, void, $Component*)},
		{"setColumns", "(I)V", nullptr, $PUBLIC, $virtualMethod(GridLayout, setColumns, void, int32_t)},
		{"setHgap", "(I)V", nullptr, $PUBLIC, $virtualMethod(GridLayout, setHgap, void, int32_t)},
		{"setRows", "(I)V", nullptr, $PUBLIC, $virtualMethod(GridLayout, setRows, void, int32_t)},
		{"setVgap", "(I)V", nullptr, $PUBLIC, $virtualMethod(GridLayout, setVgap, void, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(GridLayout, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.GridLayout",
		"java.lang.Object",
		"java.awt.LayoutManager,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GridLayout, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GridLayout));
	});
	return class$;
}

$Class* GridLayout::class$ = nullptr;

	} // awt
} // java