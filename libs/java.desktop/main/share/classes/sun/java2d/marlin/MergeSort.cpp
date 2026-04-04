#include <sun/java2d/marlin/MergeSort.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <jcpp.h>

#undef INSERTION_SORT_THRESHOLD

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace marlin {

void MergeSort::mergeSortNoCopy($ints* x, $ints* y, $ints* auxX, $ints* auxY, int32_t toIndex, int32_t insertionSortIndex) {
	$useLocalObjectStack();
	if ((toIndex > $nc(x)->length) || (toIndex > $nc(y)->length) || (toIndex > $nc(auxX)->length) || (toIndex > $nc(auxY)->length)) {
		$throwNew($ArrayIndexOutOfBoundsException, $$str({"bad arguments: toIndex="_s, $$str(toIndex)}));
	}
	mergeSort(x, y, x, auxX, y, auxY, insertionSortIndex, toIndex);
	if ((insertionSortIndex == 0) || ($nc(auxX)->get(insertionSortIndex - 1) <= $nc(auxX)->get(insertionSortIndex))) {
		$System::arraycopy(auxX, 0, x, 0, toIndex);
		$System::arraycopy(auxY, 0, y, 0, toIndex);
		return;
	}
	for (int32_t i = 0, p = 0, q = insertionSortIndex; i < toIndex; ++i) {
		if ((q >= toIndex) || ((p < insertionSortIndex) && ($nc(auxX)->get(p) <= $nc(auxX)->get(q)))) {
			x->set(i, $nc(auxX)->get(p));
			$nc(y)->set(i, $nc(auxY)->get(p));
			++p;
		} else {
			x->set(i, $nc(auxX)->get(q));
			$nc(y)->set(i, $nc(auxY)->get(q));
			++q;
		}
	}
}

void MergeSort::mergeSort($ints* refX, $ints* refY, $ints* srcX, $ints* dstX, $ints* srcY, $ints* dstY, int32_t low, int32_t high) {
	int32_t length = high - low;
	if (length <= MergeSort::INSERTION_SORT_THRESHOLD) {
		$nc(dstX)->set(low, $nc(refX)->get(low));
		$nc(dstY)->set(low, $nc(refY)->get(low));
		for (int32_t i = low + 1, j = low, x = 0, y = 0; i < high; j = i++) {
			x = refX->get(i);
			y = refY->get(i);
			while (dstX->get(j) > x) {
				dstX->set(j + 1, dstX->get(j));
				dstY->set(j + 1, dstY->get(j));
				if (j-- == low) {
					break;
				}
			}
			dstX->set(j + 1, x);
			dstY->set(j + 1, y);
		}
		return;
	}
	int32_t mid = (low + high) >> 1;
	mergeSort(refX, refY, dstX, srcX, dstY, srcY, low, mid);
	mergeSort(refX, refY, dstX, srcX, dstY, srcY, mid, high);
	if ($nc(srcX)->get(high - 1) <= $nc(srcX)->get(low)) {
		int32_t left = mid - low;
		int32_t right = high - mid;
		int32_t off = (left != right) ? 1 : 0;
		$System::arraycopy(srcX, low, dstX, mid + off, left);
		$System::arraycopy(srcX, mid, dstX, low, right);
		$System::arraycopy(srcY, low, dstY, mid + off, left);
		$System::arraycopy(srcY, mid, dstY, low, right);
		return;
	}
	if (srcX->get(mid - 1) <= srcX->get(mid)) {
		$System::arraycopy(srcX, low, dstX, low, length);
		$System::arraycopy(srcY, low, dstY, low, length);
		return;
	}
	for (int32_t i = low, p = low, q = mid; i < high; ++i) {
		if ((q >= high) || ((p < mid) && (srcX->get(p) <= srcX->get(q)))) {
			$nc(dstX)->set(i, srcX->get(p));
			$nc(dstY)->set(i, $nc(srcY)->get(p));
			++p;
		} else {
			$nc(dstX)->set(i, srcX->get(q));
			$nc(dstY)->set(i, $nc(srcY)->get(q));
			++q;
		}
	}
}

void MergeSort::init$() {
}

MergeSort::MergeSort() {
}

$Class* MergeSort::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSERTION_SORT_THRESHOLD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MergeSort, INSERTION_SORT_THRESHOLD)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MergeSort, init$, void)},
		{"mergeSort", "([I[I[I[I[I[III)V", nullptr, $PRIVATE | $STATIC, $staticMethod(MergeSort, mergeSort, void, $ints*, $ints*, $ints*, $ints*, $ints*, $ints*, int32_t, int32_t)},
		{"mergeSortNoCopy", "([I[I[I[III)V", nullptr, $STATIC, $staticMethod(MergeSort, mergeSortNoCopy, void, $ints*, $ints*, $ints*, $ints*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.java2d.marlin.MergeSort",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MergeSort, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MergeSort);
	});
	return class$;
}

$Class* MergeSort::class$ = nullptr;

		} // marlin
	} // java2d
} // sun