/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/event.h>

        #include <wx/event.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxScrollWinEvent : public  ::wxScrollWinEvent
{
public:
    sipwxScrollWinEvent( ::wxEventType,int,int);
    sipwxScrollWinEvent(const  ::wxScrollWinEvent&);
    virtual ~sipwxScrollWinEvent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::wxEvent* Clone() const SIP_OVERRIDE;
     ::wxEventCategory GetEventCategory() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxScrollWinEvent(const sipwxScrollWinEvent &);
    sipwxScrollWinEvent &operator = (const sipwxScrollWinEvent &);

    char sipPyMethods[2];
};

sipwxScrollWinEvent::sipwxScrollWinEvent( ::wxEventType commandType,int pos,int orientation):  ::wxScrollWinEvent(commandType,pos,orientation), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxScrollWinEvent::sipwxScrollWinEvent(const  ::wxScrollWinEvent& a0):  ::wxScrollWinEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxScrollWinEvent::~sipwxScrollWinEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEvent* sipwxScrollWinEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxScrollWinEvent::Clone();

    extern  ::wxEvent* sipVH__core_97(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_97(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEventCategory sipwxScrollWinEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxScrollWinEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__core_98(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_98(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxScrollWinEvent_GetOrientation, "GetOrientation() -> int\n"
"\n"
"Returns wxHORIZONTAL or wxVERTICAL, depending on the orientation of\n"
"the scrollbar.");

extern "C" {static PyObject *meth_wxScrollWinEvent_GetOrientation(PyObject *, PyObject *);}
static PyObject *meth_wxScrollWinEvent_GetOrientation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxScrollWinEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxScrollWinEvent, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetOrientation();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ScrollWinEvent, sipName_GetOrientation, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxScrollWinEvent_GetPosition, "GetPosition() -> int\n"
"\n"
"Returns the position of the scrollbar for the thumb track and release\n"
"events.");

extern "C" {static PyObject *meth_wxScrollWinEvent_GetPosition(PyObject *, PyObject *);}
static PyObject *meth_wxScrollWinEvent_GetPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxScrollWinEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxScrollWinEvent, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetPosition();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ScrollWinEvent, sipName_GetPosition, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxScrollWinEvent_SetOrientation, "SetOrientation(orient)");

extern "C" {static PyObject *meth_wxScrollWinEvent_SetOrientation(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxScrollWinEvent_SetOrientation(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int orient;
         ::wxScrollWinEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_orient,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxScrollWinEvent, &sipCpp, &orient))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetOrientation(orient);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ScrollWinEvent, sipName_SetOrientation, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxScrollWinEvent_SetPosition, "SetPosition(pos)");

extern "C" {static PyObject *meth_wxScrollWinEvent_SetPosition(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxScrollWinEvent_SetPosition(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int pos;
         ::wxScrollWinEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pos,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxScrollWinEvent, &sipCpp, &pos))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetPosition(pos);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ScrollWinEvent, sipName_SetPosition, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxScrollWinEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxScrollWinEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxScrollWinEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxScrollWinEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxScrollWinEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxScrollWinEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ScrollWinEvent, sipName_Clone, doc_wxScrollWinEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxScrollWinEvent(void *, const sipTypeDef *);}
static void *cast_wxScrollWinEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxScrollWinEvent *sipCpp = reinterpret_cast< ::wxScrollWinEvent *>(sipCppV);

    if (targetType == sipType_wxEvent)
        return static_cast< ::wxEvent *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxScrollWinEvent(void *, int);}
static void release_wxScrollWinEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxScrollWinEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxScrollWinEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxScrollWinEvent(sipSimpleWrapper *);}
static void dealloc_wxScrollWinEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxScrollWinEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxScrollWinEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxScrollWinEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxScrollWinEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxScrollWinEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxEventType commandType = wxEVT_NULL;
        int pos = 0;
        int orientation = 0;

        static const char *sipKwdList[] = {
            sipName_commandType,
            sipName_pos,
            sipName_orientation,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|iii", &commandType, &pos, &orientation))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxScrollWinEvent(commandType,pos,orientation);
            Py_END_ALLOW_THREADS

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
        const  ::wxScrollWinEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxScrollWinEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxScrollWinEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxScrollWinEvent[] = {{147, 255, 1}};


static PyMethodDef methods_wxScrollWinEvent[] = {
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxScrollWinEvent_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxScrollWinEvent_Clone)},
    {SIP_MLNAME_CAST(sipName_GetOrientation), meth_wxScrollWinEvent_GetOrientation, METH_VARARGS, SIP_MLDOC_CAST(doc_wxScrollWinEvent_GetOrientation)},
    {SIP_MLNAME_CAST(sipName_GetPosition), meth_wxScrollWinEvent_GetPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_wxScrollWinEvent_GetPosition)},
    {SIP_MLNAME_CAST(sipName_SetOrientation), SIP_MLMETH_CAST(meth_wxScrollWinEvent_SetOrientation), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxScrollWinEvent_SetOrientation)},
    {SIP_MLNAME_CAST(sipName_SetPosition), SIP_MLMETH_CAST(meth_wxScrollWinEvent_SetPosition), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxScrollWinEvent_SetPosition)}
};

sipVariableDef variables_wxScrollWinEvent[] = {
    {PropertyVariable, sipName_Position, &methods_wxScrollWinEvent[2], &methods_wxScrollWinEvent[4], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Orientation, &methods_wxScrollWinEvent[1], &methods_wxScrollWinEvent[3], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxScrollWinEvent, "ScrollWinEvent(commandType=wxEVT_NULL, pos=0, orientation=0)\n"
"\n"
"A scroll event holds information about events sent from scrolling\n"
"windows.");


sipClassTypeDef sipTypeDef__core_wxScrollWinEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxScrollWinEvent,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_ScrollWinEvent,
        {0, 0, 1},
        5, methods_wxScrollWinEvent,
        0, SIP_NULLPTR,
        2, variables_wxScrollWinEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxScrollWinEvent,
    -1,
    -1,
    supers_wxScrollWinEvent,
    SIP_NULLPTR,
    init_type_wxScrollWinEvent,
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
    dealloc_wxScrollWinEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxScrollWinEvent,
    cast_wxScrollWinEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};