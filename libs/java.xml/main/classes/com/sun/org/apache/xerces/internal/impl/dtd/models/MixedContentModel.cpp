#include <com/sun/org/apache/xerces/internal/impl/dtd/models/MixedContentModel.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <jcpp.h>

#undef CONTENTSPECNODE_ANY
#undef CONTENTSPECNODE_ANY_LOCAL
#undef CONTENTSPECNODE_ANY_OTHER
#undef CONTENTSPECNODE_LEAF

using $QNameArray = $Array<::com::sun::org::apache::xerces::internal::xni::QName>;
using $XMLContentSpec = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								namespace models {

$FieldInfo _MixedContentModel_FieldInfo_[] = {
	{"fCount", "I", nullptr, $PRIVATE, $field(MixedContentModel, fCount)},
	{"fChildren", "[Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $field(MixedContentModel, fChildren)},
	{"fChildrenType", "[I", nullptr, $PRIVATE, $field(MixedContentModel, fChildrenType)},
	{"fOrdered", "Z", nullptr, $PRIVATE, $field(MixedContentModel, fOrdered)},
	{}
};

$MethodInfo _MixedContentModel_MethodInfo_[] = {
	{"<init>", "([Lcom/sun/org/apache/xerces/internal/xni/QName;[IIIZ)V", nullptr, $PUBLIC, $method(MixedContentModel, init$, void, $QNameArray*, $ints*, int32_t, int32_t, bool)},
	{"validate", "([Lcom/sun/org/apache/xerces/internal/xni/QName;II)I", nullptr, $PUBLIC, $virtualMethod(MixedContentModel, validate, int32_t, $QNameArray*, int32_t, int32_t)},
	{}
};

$ClassInfo _MixedContentModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.models.MixedContentModel",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.dtd.models.ContentModelValidator",
	_MixedContentModel_FieldInfo_,
	_MixedContentModel_MethodInfo_
};

$Object* allocate$MixedContentModel($Class* clazz) {
	return $of($alloc(MixedContentModel));
}

void MixedContentModel::init$($QNameArray* children, $ints* type, int32_t offset, int32_t length, bool ordered) {
	$useLocalCurrentObjectStackCache();
	this->fCount = length;
	$set(this, fChildren, $new($QNameArray, this->fCount));
	$set(this, fChildrenType, $new($ints, this->fCount));
	for (int32_t i = 0; i < this->fCount; ++i) {
		$nc(this->fChildren)->set(i, $$new($QName, $nc(children)->get(offset + i)));
		$nc(this->fChildrenType)->set(i, $nc(type)->get(offset + i));
	}
	this->fOrdered = ordered;
}

int32_t MixedContentModel::validate($QNameArray* children, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (this->fOrdered) {
		int32_t inIndex = 0;
		for (int32_t outIndex = 0; outIndex < length; ++outIndex) {
			$var($QName, curChild, $nc(children)->get(offset + outIndex));
			if ($nc(curChild)->localpart == nullptr) {
				continue;
			}
			int32_t type = $nc(this->fChildrenType)->get(inIndex);
			if (type == $XMLContentSpec::CONTENTSPECNODE_LEAF) {
				if ($nc($nc(this->fChildren)->get(inIndex))->rawname != $nc(children->get(offset + outIndex))->rawname) {
					return outIndex;
				}
			} else if (type == $XMLContentSpec::CONTENTSPECNODE_ANY) {
				$var($String, uri, $nc($nc(this->fChildren)->get(inIndex))->uri);
				if (uri != nullptr && uri != $nc(children->get(outIndex))->uri) {
					return outIndex;
				}
			} else if (type == $XMLContentSpec::CONTENTSPECNODE_ANY_LOCAL) {
				if ($nc(children->get(outIndex))->uri != nullptr) {
					return outIndex;
				}
			} else if (type == $XMLContentSpec::CONTENTSPECNODE_ANY_OTHER) {
				if ($nc($nc(this->fChildren)->get(inIndex))->uri == $nc(children->get(outIndex))->uri) {
					return outIndex;
				}
			}
			++inIndex;
		}
	} else {
		for (int32_t outIndex = 0; outIndex < length; ++outIndex) {
			$var($QName, curChild, $nc(children)->get(offset + outIndex));
			if ($nc(curChild)->localpart == nullptr) {
				continue;
			}
			int32_t inIndex = 0;
			for (; inIndex < this->fCount; ++inIndex) {
				int32_t type = $nc(this->fChildrenType)->get(inIndex);
				if (type == $XMLContentSpec::CONTENTSPECNODE_LEAF) {
					if ($nc(curChild)->rawname == $nc($nc(this->fChildren)->get(inIndex))->rawname) {
						break;
					}
				} else if (type == $XMLContentSpec::CONTENTSPECNODE_ANY) {
					$var($String, uri, $nc($nc(this->fChildren)->get(inIndex))->uri);
					if (uri == nullptr || uri == $nc(children->get(outIndex))->uri) {
						break;
					}
				} else if (type == $XMLContentSpec::CONTENTSPECNODE_ANY_LOCAL) {
					if ($nc(children->get(outIndex))->uri == nullptr) {
						break;
					}
				} else if (type == $XMLContentSpec::CONTENTSPECNODE_ANY_OTHER) {
					if ($nc($nc(this->fChildren)->get(inIndex))->uri != $nc(children->get(outIndex))->uri) {
						break;
					}
				}
			}
			if (inIndex == this->fCount) {
				return outIndex;
			}
		}
	}
	return -1;
}

MixedContentModel::MixedContentModel() {
}

$Class* MixedContentModel::load$($String* name, bool initialize) {
	$loadClass(MixedContentModel, name, initialize, &_MixedContentModel_ClassInfo_, allocate$MixedContentModel);
	return class$;
}

$Class* MixedContentModel::class$ = nullptr;

								} // models
							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com