#include <javax/swing/tree/AbstractLayoutCache.h>

#include <java/awt/Rectangle.h>
#include <java/lang/Math.h>
#include <java/util/Enumeration.h>
#include <javax/swing/event/TreeModelEvent.h>
#include <javax/swing/tree/AbstractLayoutCache$NodeDimensions.h>
#include <javax/swing/tree/RowMapper.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreePath.h>
#include <javax/swing/tree/TreeSelectionModel.h>
#include <jcpp.h>

#undef MAX_VALUE

using $TreePathArray = $Array<::javax::swing::tree::TreePath>;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Enumeration = ::java::util::Enumeration;
using $TreeModelEvent = ::javax::swing::event::TreeModelEvent;
using $AbstractLayoutCache$NodeDimensions = ::javax::swing::tree::AbstractLayoutCache$NodeDimensions;
using $RowMapper = ::javax::swing::tree::RowMapper;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreePath = ::javax::swing::tree::TreePath;
using $TreeSelectionModel = ::javax::swing::tree::TreeSelectionModel;

namespace javax {
	namespace swing {
		namespace tree {

$NamedAttribute AbstractLayoutCache_Attribute_var$0[] = {
	{"description", 's', "Whether or not the root node from the TreeModel is visible."},
	{}
};

$CompoundAttribute _AbstractLayoutCache_MethodAnnotations_setRootVisible25[] = {
	{"Ljava/beans/BeanProperty;", AbstractLayoutCache_Attribute_var$0},
	{}
};

$NamedAttribute AbstractLayoutCache_Attribute_var$1[] = {
	{"description", 's', "The height of each cell."},
	{}
};

$CompoundAttribute _AbstractLayoutCache_MethodAnnotations_setRowHeight26[] = {
	{"Ljava/beans/BeanProperty;", AbstractLayoutCache_Attribute_var$1},
	{}
};

$FieldInfo _AbstractLayoutCache_FieldInfo_[] = {
	{"nodeDimensions", "Ljavax/swing/tree/AbstractLayoutCache$NodeDimensions;", nullptr, $PROTECTED, $field(AbstractLayoutCache, nodeDimensions)},
	{"treeModel", "Ljavax/swing/tree/TreeModel;", nullptr, $PROTECTED, $field(AbstractLayoutCache, treeModel)},
	{"treeSelectionModel", "Ljavax/swing/tree/TreeSelectionModel;", nullptr, $PROTECTED, $field(AbstractLayoutCache, treeSelectionModel)},
	{"rootVisible", "Z", nullptr, $PROTECTED, $field(AbstractLayoutCache, rootVisible)},
	{"rowHeight", "I", nullptr, $PROTECTED, $field(AbstractLayoutCache, rowHeight)},
	{}
};

$MethodInfo _AbstractLayoutCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractLayoutCache, init$, void)},
	{"getBounds", "(Ljavax/swing/tree/TreePath;Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractLayoutCache, getBounds, $Rectangle*, $TreePath*, $Rectangle*)},
	{"getExpandedState", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractLayoutCache, getExpandedState, bool, $TreePath*)},
	{"getModel", "()Ljavax/swing/tree/TreeModel;", nullptr, $PUBLIC, $virtualMethod(AbstractLayoutCache, getModel, $TreeModel*)},
	{"getNodeDimensions", "()Ljavax/swing/tree/AbstractLayoutCache$NodeDimensions;", nullptr, $PUBLIC, $virtualMethod(AbstractLayoutCache, getNodeDimensions, $AbstractLayoutCache$NodeDimensions*)},
	{"getNodeDimensions", "(Ljava/lang/Object;IIZLjava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PROTECTED, $virtualMethod(AbstractLayoutCache, getNodeDimensions, $Rectangle*, Object$*, int32_t, int32_t, bool, $Rectangle*)},
	{"getPathClosestTo", "(II)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractLayoutCache, getPathClosestTo, $TreePath*, int32_t, int32_t)},
	{"getPathForRow", "(I)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractLayoutCache, getPathForRow, $TreePath*, int32_t)},
	{"getPreferredHeight", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractLayoutCache, getPreferredHeight, int32_t)},
	{"getPreferredWidth", "(Ljava/awt/Rectangle;)I", nullptr, $PUBLIC, $virtualMethod(AbstractLayoutCache, getPreferredWidth, int32_t, $Rectangle*)},
	{"getRowCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractLayoutCache, getRowCount, int32_t)},
	{"getRowForPath", "(Ljavax/swing/tree/TreePath;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractLayoutCache, getRowForPath, int32_t, $TreePath*)},
	{"getRowHeight", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractLayoutCache, getRowHeight, int32_t)},
	{"getRowsForPaths", "([Ljavax/swing/tree/TreePath;)[I", nullptr, $PUBLIC, $virtualMethod(AbstractLayoutCache, getRowsForPaths, $ints*, $TreePathArray*)},
	{"getSelectionModel", "()Ljavax/swing/tree/TreeSelectionModel;", nullptr, $PUBLIC, $virtualMethod(AbstractLayoutCache, getSelectionModel, $TreeSelectionModel*)},
	{"getVisibleChildCount", "(Ljavax/swing/tree/TreePath;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractLayoutCache, getVisibleChildCount, int32_t, $TreePath*)},
	{"getVisiblePathsFrom", "(Ljavax/swing/tree/TreePath;)Ljava/util/Enumeration;", "(Ljavax/swing/tree/TreePath;)Ljava/util/Enumeration<Ljavax/swing/tree/TreePath;>;", $PUBLIC | $ABSTRACT, $virtualMethod(AbstractLayoutCache, getVisiblePathsFrom, $Enumeration*, $TreePath*)},
	{"invalidatePathBounds", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractLayoutCache, invalidatePathBounds, void, $TreePath*)},
	{"invalidateSizes", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractLayoutCache, invalidateSizes, void)},
	{"isExpanded", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractLayoutCache, isExpanded, bool, $TreePath*)},
	{"isFixedRowHeight", "()Z", nullptr, $PROTECTED, $virtualMethod(AbstractLayoutCache, isFixedRowHeight, bool)},
	{"isRootVisible", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractLayoutCache, isRootVisible, bool)},
	{"setExpandedState", "(Ljavax/swing/tree/TreePath;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractLayoutCache, setExpandedState, void, $TreePath*, bool)},
	{"setModel", "(Ljavax/swing/tree/TreeModel;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLayoutCache, setModel, void, $TreeModel*)},
	{"setNodeDimensions", "(Ljavax/swing/tree/AbstractLayoutCache$NodeDimensions;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLayoutCache, setNodeDimensions, void, $AbstractLayoutCache$NodeDimensions*)},
	{"setRootVisible", "(Z)V", nullptr, $PUBLIC, $virtualMethod(AbstractLayoutCache, setRootVisible, void, bool), nullptr, nullptr, _AbstractLayoutCache_MethodAnnotations_setRootVisible25},
	{"setRowHeight", "(I)V", nullptr, $PUBLIC, $virtualMethod(AbstractLayoutCache, setRowHeight, void, int32_t), nullptr, nullptr, _AbstractLayoutCache_MethodAnnotations_setRowHeight26},
	{"setSelectionModel", "(Ljavax/swing/tree/TreeSelectionModel;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLayoutCache, setSelectionModel, void, $TreeSelectionModel*)},
	{"treeNodesChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractLayoutCache, treeNodesChanged, void, $TreeModelEvent*)},
	{"treeNodesInserted", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractLayoutCache, treeNodesInserted, void, $TreeModelEvent*)},
	{"treeNodesRemoved", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractLayoutCache, treeNodesRemoved, void, $TreeModelEvent*)},
	{"treeStructureChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractLayoutCache, treeStructureChanged, void, $TreeModelEvent*)},
	{}
};

$InnerClassInfo _AbstractLayoutCache_InnerClassesInfo_[] = {
	{"javax.swing.tree.AbstractLayoutCache$NodeDimensions", "javax.swing.tree.AbstractLayoutCache", "NodeDimensions", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractLayoutCache_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.tree.AbstractLayoutCache",
	"java.lang.Object",
	"javax.swing.tree.RowMapper",
	_AbstractLayoutCache_FieldInfo_,
	_AbstractLayoutCache_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractLayoutCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.tree.AbstractLayoutCache$NodeDimensions"
};

$Object* allocate$AbstractLayoutCache($Class* clazz) {
	return $of($alloc(AbstractLayoutCache));
}

void AbstractLayoutCache::init$() {
}

void AbstractLayoutCache::setNodeDimensions($AbstractLayoutCache$NodeDimensions* nd) {
	$set(this, nodeDimensions, nd);
}

$AbstractLayoutCache$NodeDimensions* AbstractLayoutCache::getNodeDimensions() {
	return this->nodeDimensions;
}

void AbstractLayoutCache::setModel($TreeModel* newModel) {
	$set(this, treeModel, newModel);
}

$TreeModel* AbstractLayoutCache::getModel() {
	return this->treeModel;
}

void AbstractLayoutCache::setRootVisible(bool rootVisible) {
	this->rootVisible = rootVisible;
}

bool AbstractLayoutCache::isRootVisible() {
	return this->rootVisible;
}

void AbstractLayoutCache::setRowHeight(int32_t rowHeight) {
	this->rowHeight = rowHeight;
}

int32_t AbstractLayoutCache::getRowHeight() {
	return this->rowHeight;
}

void AbstractLayoutCache::setSelectionModel($TreeSelectionModel* newLSM) {
	if (this->treeSelectionModel != nullptr) {
		$nc(this->treeSelectionModel)->setRowMapper(nullptr);
	}
	$set(this, treeSelectionModel, newLSM);
	if (this->treeSelectionModel != nullptr) {
		$nc(this->treeSelectionModel)->setRowMapper(this);
	}
}

$TreeSelectionModel* AbstractLayoutCache::getSelectionModel() {
	return this->treeSelectionModel;
}

int32_t AbstractLayoutCache::getPreferredHeight() {
	$useLocalCurrentObjectStackCache();
	int32_t rowCount = getRowCount();
	if (rowCount > 0) {
		$var($Rectangle, bounds, getBounds($(getPathForRow(rowCount - 1)), nullptr));
		if (bounds != nullptr) {
			return bounds->y + bounds->height;
		}
	}
	return 0;
}

int32_t AbstractLayoutCache::getPreferredWidth($Rectangle* bounds) {
	$useLocalCurrentObjectStackCache();
	int32_t rowCount = getRowCount();
	if (rowCount > 0) {
		$var($TreePath, firstPath, nullptr);
		int32_t endY = 0;
		if (bounds == nullptr) {
			$assign(firstPath, getPathForRow(0));
			endY = $Integer::MAX_VALUE;
		} else {
			$assign(firstPath, getPathClosestTo($nc(bounds)->x, bounds->y));
			endY = $nc(bounds)->height + bounds->y;
		}
		$var($Enumeration, paths, getVisiblePathsFrom(firstPath));
		if (paths != nullptr && paths->hasMoreElements()) {
			$var($Rectangle, pBounds, getBounds($cast($TreePath, $(paths->nextElement())), nullptr));
			int32_t width = 0;
			if (pBounds != nullptr) {
				width = pBounds->x + pBounds->width;
				if (pBounds->y >= endY) {
					return width;
				}
			} else {
				width = 0;
			}
			while (pBounds != nullptr && paths->hasMoreElements()) {
				$assign(pBounds, getBounds($cast($TreePath, $(paths->nextElement())), pBounds));
				if (pBounds != nullptr && pBounds->y < endY) {
					width = $Math::max(width, pBounds->x + pBounds->width);
				} else {
					$assign(pBounds, nullptr);
				}
			}
			return width;
		}
	}
	return 0;
}

$ints* AbstractLayoutCache::getRowsForPaths($TreePathArray* paths) {
	if (paths == nullptr) {
		return nullptr;
	}
	int32_t numPaths = $nc(paths)->length;
	$var($ints, rows, $new($ints, numPaths));
	for (int32_t counter = 0; counter < numPaths; ++counter) {
		rows->set(counter, getRowForPath(paths->get(counter)));
	}
	return rows;
}

$Rectangle* AbstractLayoutCache::getNodeDimensions(Object$* value, int32_t row, int32_t depth, bool expanded, $Rectangle* placeIn) {
	$var($AbstractLayoutCache$NodeDimensions, nd, getNodeDimensions());
	if (nd != nullptr) {
		return nd->getNodeDimensions(value, row, depth, expanded, placeIn);
	}
	return nullptr;
}

bool AbstractLayoutCache::isFixedRowHeight() {
	return (this->rowHeight > 0);
}

AbstractLayoutCache::AbstractLayoutCache() {
}

$Class* AbstractLayoutCache::load$($String* name, bool initialize) {
	$loadClass(AbstractLayoutCache, name, initialize, &_AbstractLayoutCache_ClassInfo_, allocate$AbstractLayoutCache);
	return class$;
}

$Class* AbstractLayoutCache::class$ = nullptr;

		} // tree
	} // swing
} // javax