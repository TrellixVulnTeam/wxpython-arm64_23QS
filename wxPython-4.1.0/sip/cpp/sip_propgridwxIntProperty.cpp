/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_propgrid.h"

        #include <wx/propgrid/props.h>

    #include <wx/longlong.h>
        #include <wx/validate.h>
        #include <wx/propgrid/propgrid.h>
        #include <wx/propgrid/property.h>
        #include <wx/bitmap.h>
        #include <wx/colour.h>
        #include <wx/propgrid/property.h>
        #include <wx/propgrid/property.h>
        #include <wx/propgrid/editors.h>
        #include <wx/propgrid/propgrid.h>
        #include <wx/propgrid/editors.h>
        #include <wx/propgrid/property.h>
        #include <wx/dc.h>
        #include <wx/gdicmn.h>
        #include <wx/propgrid/property.h>
        #include <wx/window.h>
        #include <wx/event.h>
        #include <wx/gdicmn.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxIntProperty : public  ::wxIntProperty
{
public:
    sipwxIntProperty(const  ::wxString&,const  ::wxString&,long);
    sipwxIntProperty(const  ::wxString&,const  ::wxString&,const  ::wxLongLong&);
    sipwxIntProperty(const  ::wxIntProperty&);
    virtual ~sipwxIntProperty();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::wxString GetValueAsString(int) const SIP_OVERRIDE;
    void OnValidationFailure( ::wxPGVariant&) SIP_OVERRIDE;
     ::wxPGEditorDialogAdapter* GetEditorDialog() const SIP_OVERRIDE;
     ::wxPGVariant DoGetAttribute(const  ::wxString&) const SIP_OVERRIDE;
    bool DoSetAttribute(const  ::wxString&, ::wxPGVariant&) SIP_OVERRIDE;
    void RefreshChildren() SIP_OVERRIDE;
    int GetChoiceSelection() const SIP_OVERRIDE;
     ::wxPGCellRenderer* GetCellRenderer(int) const SIP_OVERRIDE;
    void OnCustomPaint( ::wxDC&,const  ::wxRect&, ::wxPGPaintData&) SIP_OVERRIDE;
     ::wxValidator* DoGetValidator() const SIP_OVERRIDE;
    const  ::wxPGEditor* DoGetEditorClass() const SIP_OVERRIDE;
     ::wxPGVariant ChildChanged( ::wxPGVariant&,int, ::wxPGVariant&) const SIP_OVERRIDE;
    bool OnEvent( ::wxPropertyGrid*, ::wxWindow*, ::wxEvent&) SIP_OVERRIDE;
     ::wxSize OnMeasureImage(int) const SIP_OVERRIDE;
     ::wxString ValueToString( ::wxPGVariant&,int) const SIP_OVERRIDE;
    bool IntToValue( ::wxPGVariant&,int,int) const SIP_OVERRIDE;
    bool StringToValue( ::wxPGVariant&,const  ::wxString&,int) const SIP_OVERRIDE;
    bool ValidateValue( ::wxPGVariant&, ::wxPGValidationInfo&) const SIP_OVERRIDE;
     ::wxPGVariant DoGetValue() const SIP_OVERRIDE;
    void OnSetValue() SIP_OVERRIDE;
     ::wxPGVariant AddSpinStepValue(long) const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxIntProperty(const sipwxIntProperty &);
    sipwxIntProperty &operator = (const sipwxIntProperty &);

    char sipPyMethods[21];
};

sipwxIntProperty::sipwxIntProperty(const  ::wxString& label,const  ::wxString& name,long value):  ::wxIntProperty(label,name,value), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxIntProperty::sipwxIntProperty(const  ::wxString& label,const  ::wxString& name,const  ::wxLongLong& value):  ::wxIntProperty(label,name,value), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxIntProperty::sipwxIntProperty(const  ::wxIntProperty& a0):  ::wxIntProperty(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxIntProperty::~sipwxIntProperty()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxString sipwxIntProperty::GetValueAsString(int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_GetValueAsString);

    if (!sipMeth)
        return  ::wxIntProperty::GetValueAsString(argFlags);

    extern  ::wxString sipVH__propgrid_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_21(sipGILState, 0, sipPySelf, sipMeth, argFlags);
}

void sipwxIntProperty::OnValidationFailure( ::wxPGVariant& pendingValue)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_OnValidationFailure);

    if (!sipMeth)
    {
         ::wxIntProperty::OnValidationFailure(pendingValue);
        return;
    }

    extern void sipVH__propgrid_20(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&);

    sipVH__propgrid_20(sipGILState, 0, sipPySelf, sipMeth, pendingValue);
}

 ::wxPGEditorDialogAdapter* sipwxIntProperty::GetEditorDialog() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,SIP_NULLPTR,sipName_GetEditorDialog);

    if (!sipMeth)
        return  ::wxIntProperty::GetEditorDialog();

    extern  ::wxPGEditorDialogAdapter* sipVH__propgrid_19(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_19(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxPGVariant sipwxIntProperty::DoGetAttribute(const  ::wxString& name) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,SIP_NULLPTR,sipName_DoGetAttribute);

    if (!sipMeth)
        return  ::wxIntProperty::DoGetAttribute(name);

    extern  ::wxPGVariant sipVH__propgrid_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    return sipVH__propgrid_18(sipGILState, 0, sipPySelf, sipMeth, name);
}

bool sipwxIntProperty::DoSetAttribute(const  ::wxString& name, ::wxPGVariant& value)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,SIP_NULLPTR,sipName_DoSetAttribute);

    if (!sipMeth)
        return  ::wxIntProperty::DoSetAttribute(name,value);

    extern bool sipVH__propgrid_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&, ::wxPGVariant&);

    return sipVH__propgrid_17(sipGILState, 0, sipPySelf, sipMeth, name, value);
}

void sipwxIntProperty::RefreshChildren()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,SIP_NULLPTR,sipName_RefreshChildren);

    if (!sipMeth)
    {
         ::wxIntProperty::RefreshChildren();
        return;
    }

    extern void sipVH__propgrid_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__propgrid_3(sipGILState, 0, sipPySelf, sipMeth);
}

int sipwxIntProperty::GetChoiceSelection() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,SIP_NULLPTR,sipName_GetChoiceSelection);

    if (!sipMeth)
        return  ::wxIntProperty::GetChoiceSelection();

    extern int sipVH__propgrid_16(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_16(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxPGCellRenderer* sipwxIntProperty::GetCellRenderer(int column) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,SIP_NULLPTR,sipName_GetCellRenderer);

    if (!sipMeth)
        return  ::wxIntProperty::GetCellRenderer(column);

    extern  ::wxPGCellRenderer* sipVH__propgrid_15(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_15(sipGILState, 0, sipPySelf, sipMeth, column);
}

void sipwxIntProperty::OnCustomPaint( ::wxDC& dc,const  ::wxRect& rect, ::wxPGPaintData& paintdata)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,SIP_NULLPTR,sipName_OnCustomPaint);

    if (!sipMeth)
    {
         ::wxIntProperty::OnCustomPaint(dc,rect,paintdata);
        return;
    }

    extern void sipVH__propgrid_14(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&,const  ::wxRect&, ::wxPGPaintData&);

    sipVH__propgrid_14(sipGILState, 0, sipPySelf, sipMeth, dc, rect, paintdata);
}

 ::wxValidator* sipwxIntProperty::DoGetValidator() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,SIP_NULLPTR,sipName_DoGetValidator);

    if (!sipMeth)
        return  ::wxIntProperty::DoGetValidator();

    extern  ::wxValidator* sipVH__propgrid_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_13(sipGILState, 0, sipPySelf, sipMeth);
}

const  ::wxPGEditor* sipwxIntProperty::DoGetEditorClass() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,SIP_NULLPTR,sipName_DoGetEditorClass);

    if (!sipMeth)
        return  ::wxIntProperty::DoGetEditorClass();

    extern const  ::wxPGEditor* sipVH__propgrid_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_12(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxPGVariant sipwxIntProperty::ChildChanged( ::wxPGVariant& thisValue,int childIndex, ::wxPGVariant& childValue) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,SIP_NULLPTR,sipName_ChildChanged);

    if (!sipMeth)
        return  ::wxIntProperty::ChildChanged(thisValue,childIndex,childValue);

    extern  ::wxPGVariant sipVH__propgrid_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,int, ::wxPGVariant&);

    return sipVH__propgrid_11(sipGILState, 0, sipPySelf, sipMeth, thisValue, childIndex, childValue);
}

bool sipwxIntProperty::OnEvent( ::wxPropertyGrid*propgrid, ::wxWindow*wnd_primary, ::wxEvent& event)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,SIP_NULLPTR,sipName_OnEvent);

    if (!sipMeth)
        return  ::wxIntProperty::OnEvent(propgrid,wnd_primary,event);

    extern bool sipVH__propgrid_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPropertyGrid*, ::wxWindow*, ::wxEvent&);

    return sipVH__propgrid_10(sipGILState, 0, sipPySelf, sipMeth, propgrid, wnd_primary, event);
}

 ::wxSize sipwxIntProperty::OnMeasureImage(int item) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[13]),sipPySelf,SIP_NULLPTR,sipName_OnMeasureImage);

    if (!sipMeth)
        return  ::wxIntProperty::OnMeasureImage(item);

    extern  ::wxSize sipVH__propgrid_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_9(sipGILState, 0, sipPySelf, sipMeth, item);
}

 ::wxString sipwxIntProperty::ValueToString( ::wxPGVariant& value,int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[14]),sipPySelf,SIP_NULLPTR,sipName_ValueToString);

    if (!sipMeth)
        return  ::wxIntProperty::ValueToString(value,argFlags);

    extern  ::wxString sipVH__propgrid_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,int);

    return sipVH__propgrid_8(sipGILState, 0, sipPySelf, sipMeth, value, argFlags);
}

bool sipwxIntProperty::IntToValue( ::wxPGVariant& variant,int number,int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[15]),sipPySelf,SIP_NULLPTR,sipName_IntToValue);

    if (!sipMeth)
        return  ::wxIntProperty::IntToValue(variant,number,argFlags);

    extern bool sipVH__propgrid_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,int,int);

    return sipVH__propgrid_7(sipGILState, 0, sipPySelf, sipMeth, variant, number, argFlags);
}

bool sipwxIntProperty::StringToValue( ::wxPGVariant& variant,const  ::wxString& text,int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[16]),sipPySelf,SIP_NULLPTR,sipName_StringToValue);

    if (!sipMeth)
        return  ::wxIntProperty::StringToValue(variant,text,argFlags);

    extern bool sipVH__propgrid_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,const  ::wxString&,int);

    return sipVH__propgrid_6(sipGILState, 0, sipPySelf, sipMeth, variant, text, argFlags);
}

bool sipwxIntProperty::ValidateValue( ::wxPGVariant& value, ::wxPGValidationInfo& validationInfo) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[17]),sipPySelf,SIP_NULLPTR,sipName_ValidateValue);

    if (!sipMeth)
        return  ::wxIntProperty::ValidateValue(value,validationInfo);

    extern bool sipVH__propgrid_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&, ::wxPGValidationInfo&);

    return sipVH__propgrid_5(sipGILState, 0, sipPySelf, sipMeth, value, validationInfo);
}

 ::wxPGVariant sipwxIntProperty::DoGetValue() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[18]),sipPySelf,SIP_NULLPTR,sipName_DoGetValue);

    if (!sipMeth)
        return  ::wxIntProperty::DoGetValue();

    extern  ::wxPGVariant sipVH__propgrid_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_4(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxIntProperty::OnSetValue()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[19],sipPySelf,SIP_NULLPTR,sipName_OnSetValue);

    if (!sipMeth)
    {
         ::wxIntProperty::OnSetValue();
        return;
    }

    extern void sipVH__propgrid_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__propgrid_3(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxPGVariant sipwxIntProperty::AddSpinStepValue(long stepScale) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[20]),sipPySelf,SIP_NULLPTR,sipName_AddSpinStepValue);

    if (!sipMeth)
        return  ::wxIntProperty::AddSpinStepValue(stepScale);

    extern  ::wxPGVariant sipVH__propgrid_64(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, long);

    return sipVH__propgrid_64(sipGILState, 0, sipPySelf, sipMeth, stepScale);
}


PyDoc_STRVAR(doc_wxIntProperty_ValueToString, "ValueToString(value, argFlags=0) -> String\n"
"\n"
"Converts property value into a text representation.");

extern "C" {static PyObject *meth_wxIntProperty_ValueToString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxIntProperty_ValueToString(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxPGVariant* value;
        int valueState = 0;
        int argFlags = 0;
        const  ::wxIntProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_value,
            sipName_argFlags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|i", &sipSelf, sipType_wxIntProperty, &sipCpp, sipType_wxPGVariant,&value, &valueState, &argFlags))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxIntProperty::ValueToString(*value,argFlags) : sipCpp->ValueToString(*value,argFlags)));
            Py_END_ALLOW_THREADS
            sipReleaseType(value,sipType_wxPGVariant,valueState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_IntProperty, sipName_ValueToString, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxIntProperty_StringToValue, "StringToValue(text, argFlags=0) -> (bool, variant)\n"
"\n"
"Converts text into wxVariant value appropriate for this property.");

extern "C" {static PyObject *meth_wxIntProperty_StringToValue(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxIntProperty_StringToValue(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxPGVariant* variant;
        const  ::wxString* text;
        int textState = 0;
        int argFlags = 0;
        const  ::wxIntProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_text,
            sipName_argFlags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|i", &sipSelf, sipType_wxIntProperty, &sipCpp, sipType_wxString,&text, &textState, &argFlags))
        {
            bool sipRes;
            variant = new  ::wxPGVariant();

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxIntProperty::StringToValue(*variant,*text,argFlags) : sipCpp->StringToValue(*variant,*text,argFlags));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(text),sipType_wxString,textState);

            if (PyErr_Occurred())
                return 0;

            return sipBuildResult(0,"(bN)",sipRes,variant,sipType_wxPGVariant,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_IntProperty, sipName_StringToValue, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxIntProperty_ValidateValue, "ValidateValue(value, validationInfo) -> bool\n"
"\n"
"Implement this function in derived class to check the value.");

extern "C" {static PyObject *meth_wxIntProperty_ValidateValue(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxIntProperty_ValidateValue(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxPGVariant* value;
        int valueState = 0;
         ::wxPGValidationInfo* validationInfo;
        const  ::wxIntProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_value,
            sipName_validationInfo,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1J9", &sipSelf, sipType_wxIntProperty, &sipCpp, sipType_wxPGVariant,&value, &valueState, sipType_wxPGValidationInfo, &validationInfo))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxIntProperty::ValidateValue(*value,*validationInfo) : sipCpp->ValidateValue(*value,*validationInfo));
            Py_END_ALLOW_THREADS
            sipReleaseType(value,sipType_wxPGVariant,valueState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_IntProperty, sipName_ValidateValue, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxIntProperty_IntToValue, "IntToValue(number, argFlags=0) -> (bool, variant)\n"
"\n"
"Converts integer (possibly a choice selection) into wxVariant value\n"
"appropriate for this property.");

extern "C" {static PyObject *meth_wxIntProperty_IntToValue(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxIntProperty_IntToValue(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxPGVariant* variant;
        int number;
        int argFlags = 0;
        const  ::wxIntProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_number,
            sipName_argFlags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi|i", &sipSelf, sipType_wxIntProperty, &sipCpp, &number, &argFlags))
        {
            bool sipRes;
            variant = new  ::wxPGVariant();

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxIntProperty::IntToValue(*variant,number,argFlags) : sipCpp->IntToValue(*variant,number,argFlags));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipBuildResult(0,"(bN)",sipRes,variant,sipType_wxPGVariant,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_IntProperty, sipName_IntToValue, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxIntProperty_DoGetValidator, "DoGetValidator() -> wx.Validator\n"
"\n"
"Returns pointer to the wxValidator that should be used with the editor\n"
"of this property (NULL for no validator).");

extern "C" {static PyObject *meth_wxIntProperty_DoGetValidator(PyObject *, PyObject *);}
static PyObject *meth_wxIntProperty_DoGetValidator(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxIntProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxIntProperty, &sipCpp))
        {
             ::wxValidator*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxIntProperty::DoGetValidator() : sipCpp->DoGetValidator());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxValidator,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_IntProperty, sipName_DoGetValidator, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxIntProperty_AddSpinStepValue, "AddSpinStepValue(stepScale) -> PGVariant\n"
"\n"
"Returns what would be the new value of the property after adding\n"
"SpinCtrl editor step to the current value.");

extern "C" {static PyObject *meth_wxIntProperty_AddSpinStepValue(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxIntProperty_AddSpinStepValue(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        long stepScale;
        const  ::wxIntProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stepScale,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bl", &sipSelf, sipType_wxIntProperty, &sipCpp, &stepScale))
        {
             ::wxPGVariant*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPGVariant((sipSelfWasArg ? sipCpp-> ::wxIntProperty::AddSpinStepValue(stepScale) : sipCpp->AddSpinStepValue(stepScale)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPGVariant,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_IntProperty, sipName_AddSpinStepValue, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxIntProperty_GetClassValidator, "GetClassValidator() -> wx.Validator");

extern "C" {static PyObject *meth_wxIntProperty_GetClassValidator(PyObject *, PyObject *);}
static PyObject *meth_wxIntProperty_GetClassValidator(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::wxValidator*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxIntProperty::GetClassValidator();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxValidator,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_IntProperty, sipName_GetClassValidator, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxIntProperty(void *, const sipTypeDef *);}
static void *cast_wxIntProperty(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxIntProperty *sipCpp = reinterpret_cast< ::wxIntProperty *>(sipCppV);

    if (targetType == sipType_wxNumericProperty)
        return static_cast< ::wxNumericProperty *>(sipCpp);

    if (targetType == sipType_wxPGProperty)
        return static_cast< ::wxPGProperty *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxIntProperty(void *, int);}
static void release_wxIntProperty(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxIntProperty *>(sipCppV);
    else
        delete reinterpret_cast< ::wxIntProperty *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxIntProperty(void *, SIP_SSIZE_T, void *);}
static void assign_wxIntProperty(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxIntProperty *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxIntProperty *>(sipSrc);
}


extern "C" {static void *array_wxIntProperty(SIP_SSIZE_T);}
static void *array_wxIntProperty(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxIntProperty[sipNrElem];
}


extern "C" {static void *copy_wxIntProperty(const void *, SIP_SSIZE_T);}
static void *copy_wxIntProperty(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxIntProperty(reinterpret_cast<const  ::wxIntProperty *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxIntProperty(sipSimpleWrapper *);}
static void dealloc_wxIntProperty(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxIntProperty *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxIntProperty(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxIntProperty(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxIntProperty(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxIntProperty *sipCpp = SIP_NULLPTR;

    {
        const  ::wxString& labeldef = wxPG_LABEL;
        const  ::wxString* label = &labeldef;
        int labelState = 0;
        const  ::wxString& namedef = wxPG_LABEL;
        const  ::wxString* name = &namedef;
        int nameState = 0;
        long value = 0;

        static const char *sipKwdList[] = {
            sipName_label,
            sipName_name,
            sipName_value,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1J1l", sipType_wxString,&label, &labelState, sipType_wxString,&name, &nameState, &value))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxIntProperty(*label,*name,value);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(label),sipType_wxString,labelState);
            sipReleaseType(const_cast< ::wxString *>(name),sipType_wxString,nameState);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::wxString* label;
        int labelState = 0;
        const  ::wxString* name;
        int nameState = 0;
        const  ::wxLongLong* value;
        int valueState = 0;

        static const char *sipKwdList[] = {
            sipName_label,
            sipName_name,
            sipName_value,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1J1J1", sipType_wxString,&label, &labelState, sipType_wxString,&name, &nameState, sipType_wxLongLong,&value, &valueState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxIntProperty(*label,*name,*value);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(label),sipType_wxString,labelState);
            sipReleaseType(const_cast< ::wxString *>(name),sipType_wxString,nameState);
            sipReleaseType(const_cast< ::wxLongLong *>(value),sipType_wxLongLong,valueState);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::wxIntProperty* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxIntProperty, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxIntProperty(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxIntProperty[] = {{20, 255, 1}};


static PyMethodDef methods_wxIntProperty[] = {
    {SIP_MLNAME_CAST(sipName_AddSpinStepValue), SIP_MLMETH_CAST(meth_wxIntProperty_AddSpinStepValue), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxIntProperty_AddSpinStepValue)},
    {SIP_MLNAME_CAST(sipName_DoGetValidator), meth_wxIntProperty_DoGetValidator, METH_VARARGS, SIP_MLDOC_CAST(doc_wxIntProperty_DoGetValidator)},
    {SIP_MLNAME_CAST(sipName_GetClassValidator), meth_wxIntProperty_GetClassValidator, METH_VARARGS, SIP_MLDOC_CAST(doc_wxIntProperty_GetClassValidator)},
    {SIP_MLNAME_CAST(sipName_IntToValue), SIP_MLMETH_CAST(meth_wxIntProperty_IntToValue), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxIntProperty_IntToValue)},
    {SIP_MLNAME_CAST(sipName_StringToValue), SIP_MLMETH_CAST(meth_wxIntProperty_StringToValue), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxIntProperty_StringToValue)},
    {SIP_MLNAME_CAST(sipName_ValidateValue), SIP_MLMETH_CAST(meth_wxIntProperty_ValidateValue), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxIntProperty_ValidateValue)},
    {SIP_MLNAME_CAST(sipName_ValueToString), SIP_MLMETH_CAST(meth_wxIntProperty_ValueToString), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxIntProperty_ValueToString)}
};

PyDoc_STRVAR(doc_wxIntProperty, "IntProperty(label=PG_LABEL, name=PG_LABEL, value=0)\n"
"IntProperty(label, name, value)\n"
"\n"
"Basic property with integer value.");


sipClassTypeDef sipTypeDef__propgrid_wxIntProperty = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxIntProperty,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_IntProperty,
        {0, 0, 1},
        7, methods_wxIntProperty,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxIntProperty,
    -1,
    -1,
    supers_wxIntProperty,
    SIP_NULLPTR,
    init_type_wxIntProperty,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_wxIntProperty,
    assign_wxIntProperty,
    array_wxIntProperty,
    copy_wxIntProperty,
    release_wxIntProperty,
    cast_wxIntProperty,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};