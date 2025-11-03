#ifndef _javax_annotation_processing_Completions$SimpleCompletion_h_
#define _javax_annotation_processing_Completions$SimpleCompletion_h_
//$ class javax.annotation.processing.Completions$SimpleCompletion
//$ extends javax.annotation.processing.Completion

#include <javax/annotation/processing/Completion.h>

namespace javax {
	namespace annotation {
		namespace processing {

class Completions$SimpleCompletion : public ::javax::annotation::processing::Completion {
	$class(Completions$SimpleCompletion, $NO_CLASS_INIT, ::javax::annotation::processing::Completion)
public:
	Completions$SimpleCompletion();
	void init$($String* value, $String* message);
	virtual $String* getMessage() override;
	virtual $String* getValue() override;
	virtual $String* toString() override;
	$String* value = nullptr;
	$String* message = nullptr;
};

		} // processing
	} // annotation
} // javax

#endif // _javax_annotation_processing_Completions$SimpleCompletion_h_