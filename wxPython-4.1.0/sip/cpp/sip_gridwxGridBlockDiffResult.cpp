/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_grid.h"

        #include <wx/grid.h>

    PyObject* _wxGridBlockDiffResult__getParts(wxGridBlockDiffResult* self)
    {
        wxPyThreadBlocker blocker;
        PyObject* ret = PyTuple_New(4);
        if (ret) {
            PyTuple_SET_ITEM(ret, 0, wxPyConstructObject(&self->m_parts[0], "wxGridBlockCoords", false));
            PyTuple_SET_ITEM(ret, 1, wxPyConstructObject(&self->m_parts[1], "wxGridBlockCoords", false));
            PyTuple_SET_ITEM(ret, 2, wxPyConstructObject(&self->m_parts[2], "wxGridBlockCoords", false));
            PyTuple_SET_ITEM(ret, 3, wxPyConstructObject(&self->m_parts[3], "wxGridBlockCoords", false));
        }
        return ret;
    }


PyDoc_STRVAR(doc_wxGridBlockDiffResult__getParts, "_getParts() -> PyObject");

extern "C" {static PyObject *meth_wxGridBlockDiffResult__getParts(PyObject *, PyObject *);}
static PyObject *meth_wxGridBlockDiffResult__getParts(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxGridBlockDiffResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridBlockDiffResult, &sipCpp))
        {
            PyObject * sipRes = SIP_NULLPTR;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxGridBlockDiffResult__getParts(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridBlockDiffResult, sipName__getParts, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGridBlockDiffResult(void *, int);}
static void release_wxGridBlockDiffResult(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxGridBlockDiffResult *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxGridBlockDiffResult(void *, SIP_SSIZE_T, void *);}
static void assign_wxGridBlockDiffResult(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxGridBlockDiffResult *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxGridBlockDiffResult *>(sipSrc);
}


extern "C" {static void *array_wxGridBlockDiffResult(SIP_SSIZE_T);}
static void *array_wxGridBlockDiffResult(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxGridBlockDiffResult[sipNrElem];
}


extern "C" {static void *copy_wxGridBlockDiffResult(const void *, SIP_SSIZE_T);}
static void *copy_wxGridBlockDiffResult(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxGridBlockDiffResult(reinterpret_cast<const  ::wxGridBlockDiffResult *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxGridBlockDiffResult(sipSimpleWrapper *);}
static void dealloc_wxGridBlockDiffResult(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGridBlockDiffResult(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxGridBlockDiffResult(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGridBlockDiffResult(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxGridBlockDiffResult *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGridBlockDiffResult();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxGridBlockDiffResult* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxGridBlockDiffResult, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGridBlockDiffResult(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxGridBlockDiffResult[] = {
    {SIP_MLNAME_CAST(sipName__getParts), meth_wxGridBlockDiffResult__getParts, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridBlockDiffResult__getParts)}
};

sipVariableDef variables_wxGridBlockDiffResult[] = {
    {PropertyVariable, sipName_m_parts, &methods_wxGridBlockDiffResult[0], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxGridBlockDiffResult, "The helper struct uses as a result type for difference functions of\n"
"wxGridBlockCoords class.");


sipClassTypeDef sipTypeDef__grid_wxGridBlockDiffResult = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxGridBlockDiffResult,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_GridBlockDiffResult,
        {0, 0, 1},
        1, methods_wxGridBlockDiffResult,
        0, SIP_NULLPTR,
        1, variables_wxGridBlockDiffResult,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGridBlockDiffResult,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxGridBlockDiffResult,
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
    dealloc_wxGridBlockDiffResult,
    assign_wxGridBlockDiffResult,
    array_wxGridBlockDiffResult,
    copy_wxGridBlockDiffResult,
    release_wxGridBlockDiffResult,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};